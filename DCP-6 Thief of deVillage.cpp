#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int grid[102][102], dp[102][102];
int n;
int fun(int i, int j)
{
    if(grid[i][j]==-1){
        if(i>n) return 0;
        else return -10000000;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int &ret = dp[i][j];
    ret = grid[i][j] + max(fun(i+1, j+1), fun(i+1, j));
    return ret;
}
int main()
{
    while(scanf("%d", &n)!=EOF){
        memset(grid, -1, sizeof grid);
        memset(dp, -1, sizeof dp);
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                scanf("%d",&grid[i][j]);
            }
        }
        printf("Output: %d\n", fun(1,1));
    }
}
