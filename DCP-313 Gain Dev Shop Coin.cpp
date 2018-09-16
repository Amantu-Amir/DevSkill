#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
    //faster;
    string s;
    int n;
    cin>>n;
    getline(cin,s);
    for(int i=1; i<=n; i++){
        getline(cin,s);
        //cout<<s<<endl;
        if(s=="Easy Problem") cout<<20<<endl;
        else if(s=="Medium Problem") cout<<40<<endl;
        else cout<<68<<endl;
    }
    return 0;
}
