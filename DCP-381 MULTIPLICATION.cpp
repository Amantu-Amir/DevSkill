#define ONLINE_JUDGE 1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1006000007
int main()
{
    ll n,tc,a;
    int cs = 1;
    scanf("%lld",&tc);
    while(tc--){
        scanf("%lld",&n);
        ll arr[n];
        ll ans = 1;
        while(n--){
            scanf("%lld",&a);
            ans = (ans*(a+1))%mod;
        }
        printf("Case %d: %lld\n",cs++,ans-1);
    }
    return 0;
}

