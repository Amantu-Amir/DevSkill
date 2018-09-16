#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[52][52][52];
int l;
ll fun(int pos, int open, int close)
{
    if(pos>l) return open==close;
    if(open<close) return 0;
    ll &ret = dp[pos][open][close];
    if(ret!=-1) return ret;
    ret = 0;
    if(open==close){
        ret = fun(pos+1, open+1, close);
    }
    else{
        ret = fun(pos+1, open+1, close);
        ret += fun(pos+1, open, close+1);
    }
    return ret;
}
int main()
{
    int tc,cs=1,k;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d%d",&l,&k);
        memset(dp, -1, sizeof dp);
        printf("Case %d: %lld\n", cs++, fun(k+1, k, 0));
    }
}
