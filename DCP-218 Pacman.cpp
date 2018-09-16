#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int grid[102][102], dp[102][102];
int n,m;
int fun(int i, int j)
{
    if(i==n && j==m) return grid[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int ret = 0;
    if(i!=n)
        ret = max(ret, grid[i][j] + fun(i+1, j));
    if(j!=m)
        ret = max(ret, grid[i][j] + fun(i, j+1));
    return dp[i][j] = ret;
}
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d%d",&n,&m);
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                scanf("%d", &grid[i][j]);
            }
        }
        memset(dp, -1, sizeof dp);
        printf("%d\n", fun(1,1));
    }
}
