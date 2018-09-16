#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ans[100005];
ll mod = 1000000007LL;
int main()
{
    ans[1] = 0;
    ans[2] = 1;
    for(int i=3; i<=100000; i++){
        ans[i] = (ans[i-1] + ans[i-2])%mod;
    }
    int tc,n;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &n);
        printf("%lld\n", ans[n]);
    }
}
