#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
ll ara[1000001];
int main()
{
    ara[0] = ara[1] = 0;
    ll add = 2;
    for(int i=2; i<=1000000; i++){

        ara[i] = ara[i-1] + add;add+=4;

    }
    int n;cin>>n; ll a;
    while(n--){
        cin>>a;
        cout<<ara[a]<<endl;
    }
    return 0;
}
