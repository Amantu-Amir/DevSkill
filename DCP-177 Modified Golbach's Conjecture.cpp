#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> primes;
void sieve()
{
    int a[1003] = {0};
    for(int i=2; i<=1000; i++){
        if(a[i]==0){
            primes.push_back(i);
            for(int j = i*i; j<=1000; j+=i)
                a[j] = 1;
        }
    }
}
ll dp[170][1003];
ll fun(int pos, int rem)
{
    if(pos<0) return rem==0;
    ll& ret = dp[pos][rem];
    if(ret!=-1) return ret;
    ret = 0;
    if(primes[pos]<=rem)
        ret+=fun(pos, rem-primes[pos]);
    ret+=fun(pos-1, rem);
    return ret;
}
int main()
{
    sieve();
    int tc,n, cs=1;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &n);
        memset(dp, -1, sizeof dp);
        ll ans = fun(primes.size()-1, n);
        printf("Case %d: ", cs++);
        if(ans==0) printf("Wrong\n");
        else printf("%lld\n", ans);
    }
}
