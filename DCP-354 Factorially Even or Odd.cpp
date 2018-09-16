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
        ll five = 0;
        ll num = 5;
        while(num<=n){
            five = five + (n/num);
            num*=5;
        }
        if(five && (!(five&(five-1LL))))
            printf("Even\n");
        else
        printf("Odd\n");
    }
    return 0;
}
