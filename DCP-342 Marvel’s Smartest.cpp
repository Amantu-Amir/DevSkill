#define ONLINE_JUDGE 1
#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ans[100005];
int mod = 1000000007;
int dp[100005][5];
int len;
int fun(int rem, int prev)
{
    if(rem==0) return 1;
    if(prev==-1){
        int ret = 0;
        for(int i=0; i<=4; i++){
            ret = (ret + fun(rem-1, i))%mod;
        }
        return ret;
    }
    else{
        int& ret = dp[rem][prev];
        if(ret!=-1) return ret;
        ret = 0;
        for(int i=0; i<=4; i++){
            if(abs(prev-i)==2)
                ret = (ret + fun(rem-1, i))%mod;
        }
        return ret;
    }
}
int main()
{
    memset(dp, -1, sizeof dp);
    for(int i=100000; i>=1; i--){
        ans[i] = fun(i, -1);
    }
    int tc,n, cs=1;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &n);
        printf("%d\n",  ans[n]);
    }
}
