#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

int main()
{
    int tc;
    string s;
    scanf("%d",&tc);
    while(tc--){
        cin>>s;
        int ans = 0;;
        int sz = s.size();
        if(sz<=5){
            for(int i=0; i<sz; i++){
                ans = ans * 10 + (s[i]-'0');
            }
        }
        else{
            for(int i = sz-5; i<sz; i++){
                ans = ans * 10 + (s[i]-'0');
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

