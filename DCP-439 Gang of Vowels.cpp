#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
bool isVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
    else return false;
}
int main()
{
    int tc, cs=1,len;
    char str[1005];
    scanf("%d", &tc);
    while(tc--){
        scanf("%d%s",&len,str);
        int ans = 0;
        for(int i=0; i<len; i++){
            if(isVowel(str[i])){
                ans++;
                while(isVowel(str[i]) && i<len){
                    i++;
                }
                i--;
            }
        }
        printf("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
