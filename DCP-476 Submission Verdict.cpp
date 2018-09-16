#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
    map<string , string> mp;
mp["ac"] = "Accepted";
mp["wa"] = "Wrong Answer";
mp["rte"] = "Run Time Error";
mp["tle"] = "Time Limit Exceeded";
int tc;
string s;
cin>>tc;
while(tc--){
    cin>>s;
    cout<<mp[s]<<endl;
}
    return 0;
}
