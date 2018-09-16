#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
    string s,t;
    map<pair<string,string>, int>mp;
    s = "Dhaka";
    t = "Chittagong";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 200;
    s = "Dhaka";
    t = "Rajshahi";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 300;
    s = "Dhaka";
    t = "Kathmandu";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 3200;
    s = "Dhaka";
    t = "Butwal";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 8200;
    s = "Rajshahi";
    t = "Chittagong";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 500;
    s = "Chittagong";
    t = "Kathmandu";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 3000;
    s = "Chittagong";
    t = "Butwal";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 8000;
    s = "Rajshahi";
    t = "Kathmandu";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 3500;
    s = "Rajshahi";
    t = "Butwal";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 8500;
    s = "Butwal";
    t = "Kathmandu";
    mp[make_pair(s,t)] = mp[make_pair(t,s)] = 11000;
    int tc;
    cin>>tc;
    while(tc--){
        cin>>s>>t;
        cout<<mp[make_pair(s,t)]<<endl;
    }

    return 0;
}
