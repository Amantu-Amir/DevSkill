#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc, cs=1;
    ll a,b,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        a = n/2;
        b = n-a;
        printf("Case %d: ", cs++);
        cout<<a*b<<endl;
    }
    return 0;
}
