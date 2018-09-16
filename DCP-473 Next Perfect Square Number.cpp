#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
    faster;
    int n;
    cin>>n;
    for(int cs=1; cs<=n; cs++){
        ll x;
        cin>>x;
        x = sqrt(x);
        x++;
        cout<<x*x<<endl;
    }

    return 0;
}
