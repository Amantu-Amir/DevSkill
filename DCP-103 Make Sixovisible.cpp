#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
#define ll long long
using namespace std;
char str[505];
int dp[505][505*9][3];
int fun(int pos, int sum, int even)
{
    if(pos<0){
        if(sum%3==0 &&  even) return sum;
        else return -100000000;
    }
    int &ret = dp[pos][sum][even];
    if(ret!=-1) return ret;
    ret = -100000000;
    ret = max(ret, fun(pos-1, sum, even));
    if(even==2){
        int now = str[pos] - '0';
        ret = max(ret, fun(pos-1, sum+now, now%2==0));
    }
    else ret = max(ret, fun(pos-1, sum+(str[pos]-'0'), even));
    return ret;
}
int main()
{
    int tc, cs=1;
    scanf("%d", &tc);
    while(tc--){
        scanf("%s", str);
        int len = strlen(str);
        memset(dp, -1, sizeof dp);
        int res = fun(len-1, 0, 2 );
        if(res==0){
            res = -1;
            for(int i=0; i<len; i++){
                if(str[i]=='0'){
                    res = 0;
                    break;
                }
            }
        }
        printf("Case %d: ", cs++);
        if(res<0) printf("Impossible\n");
        else printf("%d\n", res);
    }
}
