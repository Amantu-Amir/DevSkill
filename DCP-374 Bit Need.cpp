#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tc, ans ;
    ll n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%lld",&n);
        ans = 0;
        if(n==0) {printf("1\n"); continue;}
        while(n>0){
            n/=2;
            ans++;
        }
        printf("%d\n", ans);
    }

    return 0;
}
