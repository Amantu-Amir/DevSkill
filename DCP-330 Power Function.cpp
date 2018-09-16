#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define pb push_back

int main()
{
    ll a=1;
    ll arr[66];arr[0] = 1;
    for(ll i=1; i<=60; i++){
        a = a*2;
        ll t = a;
        while(t>9){
            t = t/10;
        }
        arr[i] = t;
    }
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        if(n%2==1) cout<<"-";
        else cout<<"+";
        cout<<arr[n]<<endl;
    }

    return 0;
}
