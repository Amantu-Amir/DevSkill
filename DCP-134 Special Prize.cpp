#include<bits/stdc++.h>
#define ll long long
using namespace std;
char str1[52], str2[52], str3[52];
int len1, len2, len3;
int dp[52][52][52];
int fun(int i, int j, int k)
{
    if(i==len1 || j==len2 || k==len3)
        return 0;
    int &ret = dp[i][j][k];
    if(ret!=-1) return ret;
    ret = 0;
    if(str1[i]==str2[j] && str2[j]==str3[k]){
        ret = 1 + fun(i+1, j+1, k+1);
    }
    else{
        ret = max(ret, fun( i+1 ,j,   k   ));
        ret = max(ret, fun( i   ,j+1, k   ));
        ret = max(ret, fun( i   ,j,   k+1 ));
        ret = max(ret, fun( i+1 ,j+1, k   ));
        ret = max(ret, fun( i+1 ,j,   k+1 ));
        ret = max(ret, fun( i   ,j+1, k+1 ));
    }
    return ret;
}
vector<char> lst;
int ok;
void solve( int i, int j, int k, int need, string str)
{
    if(ok) return;
    if(need==0){
        printf("%s\n", str.c_str());
        ok = 1;
        return;
    }
    for(char ch:lst){
        if(ok) return;
        for(int l1=i; l1<len1; l1++){
            if(ok) return;
            if(str1[l1]!=ch) continue;
            for(int l2 = j; l2<len2; l2++){
                if(ok) return;
                if(str2[l2]!=ch) continue;
                for(int l3 = k; l3<len3; l3++){
                    if(ok) return;
                    if(ch==str3[l3]){
                        if(dp[l1][l2][l3]==need){
                            solve(l1+1, l2+1, l3+1, need-1, str+ch);
                            if(ok) return;
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    for(char i = 'A'; i<='Z'; i++)
        lst.push_back(i);
    for(char i = 'a'; i<='z'; i++)
        lst.push_back(i);
    int tc;
    int cs=1;
    scanf("%d", &tc);
    while(tc--){
        scanf("%s%s%s",str1, str2, str3);
        len1 = strlen(str1);
        len2 = strlen(str2);
        len3 = strlen(str3);
        memset(dp, -1, sizeof dp);
        int lcs = fun(0,0,0);
        printf("Case %d: %d ", cs++, lcs);
        if(lcs==0){
            printf("T.A.T\n");
        }
        else{
            ok = 0;
            solve(0,0,0,lcs, "");
        }
    }
}
