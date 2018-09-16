#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[1002][1002];
char str1[1002], str2[1002];
int fun(int i, int j)
{
    if(i<0 || j<0) return 0;
    int& ret = dp[i][j];
    if(ret!=-1) return ret;
    if(str1[i]==str2[j])
        ret = 1 + fun(i-1, j-1);
    else ret = max( fun(i, j-1), fun(i-1, j) );
    return ret;
}
int main()
{
    int tc, cs=1;
    scanf("%d", &tc);
    while(tc--){
        scanf("%s", str1);
        strcpy(str2, str1);
        int len = strlen(str1);
        for(int i=0; i<(len/2); i++)
            swap(str1[i], str1[len-i-1]);
        ///cout<<str1<<"*"<<str2<<endl;
        memset(dp, -1, sizeof dp);
        int ans = len - fun(len-1, len-1);
        printf("Case %d: %d\n", cs++, ans);
    }
}
