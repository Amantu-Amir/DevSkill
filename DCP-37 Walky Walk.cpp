#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int arr[1003];
int dp[1003][1003];
int fun(int pos, int move)
{
    if(pos==n) return 0;
    if(pos>n) return 100000000;
    int &ret = dp[pos][move];
    if(ret!=-1) return ret;
    ret = 100000000;
    if(pos+move+1 <=n )
        ret = min(ret, arr[pos+move+1] + fun(pos+move+1, move+1));
    if(pos-move >=1 )
        ret = min(ret, arr[pos-move] + fun(pos-move, move));
    return ret;
}
int main()
{
    int tc, cs = 1;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &n);
        for(int i=1; i<=n; i++){
            scanf("%d", &arr[i]);
        }
        memset (dp, -1, sizeof dp);
        printf("Case %d: ", cs++);
        printf("%d\n", arr[2] + fun(2,1));
    }
}
