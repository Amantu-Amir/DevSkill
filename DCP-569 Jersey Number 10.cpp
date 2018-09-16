#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int tc,n;
    cin>>tc;
    string str;
    int skill;
    for(int cs=1; cs<=tc; cs++){
        cin>>n;
        string ans;
        int mx = -1;
        for(int i=1; i<=n; i++){
            cin>>str>>skill;
            if(skill>=mx){
                mx = skill;
                ans = str;
            }
        }
        cout<<ans<<endl;
    }
}
