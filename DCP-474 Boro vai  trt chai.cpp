#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false)
bool arr[171415] = {0};
vector<int> p;
void sieve()
{
    for(int i=2; i<=171415; i+=2) arr[i] = 1;
    p.push_back(2);
    for(long long i=3; i<=171415; i+=2){
        if(arr[i]==0){
            for(long long j = i*i; j<=171415; j+=i){
                arr[j] = 1;
            }
            p.push_back(i);
        }
    }
}
long long lpow(int a,int b)
{
    long long ret = 1;
    for(int i=1; i<=b; i++) ret*=a;
    return ret;
}
int fun(unsigned int n)
{
    int nnn = n;
    int id = 0;
    long long now = p[id++];
    long long ans = 0;
    while(now*now<=n){
        int po = 0;
        while(n%now==0){
            n/=now;
            po++;
        }
        if(po>0) ans++;
        if(ans>=3) return ans;
        if(id<p.size()) now = p[id++];
        else break;
    }
    if(n>1)ans++;
    return ans;
}
vector<int> res;
void gen()
{
    int cnt = 0;
    for(int i=0; i<=171415; i++){
        if(fun(i)>=3){
            cnt++;
            res.push_back(i);
            if(cnt==100000) return;
        }
    }
}
int main()
{
    sieve();
    gen();
    int n,tc;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        printf("%d\n",res[n-1]);
    }
    return 0;
}
