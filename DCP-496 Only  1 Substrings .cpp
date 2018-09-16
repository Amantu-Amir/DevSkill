#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define vi vector<int>
#define PI acos(-1.0)

int main()
{
    faster;
    string s;
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++){
        cin>>s;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='0') s[i] = ' ';
        }
        ll ans = 0;
        istringstream iss(s);
        string str;
        while(iss>>str){
            ll x = str.size();
            x = (x*(x+1))/2;
            ans+=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
