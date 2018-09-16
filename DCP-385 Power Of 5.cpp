#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tc;
    ll n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%lld",&n);
        while(n>4 && n%5==0)
            n/=5;
        if(n==1)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

