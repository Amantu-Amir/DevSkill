#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc,cs=1,a,n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        int ans = -1000000000;
        scanf("%d",&a);
        if(a<0) continue;
        int mx=a, mn = a;
        for(int i=2; i<=n; i++){
            scanf("%d",&a);
            ans = max(ans, max( (mx-a) , (mn-a) ));
            mx = max(mx,a);
            mn = min(mn,a);
        }
        printf("Case %d: %d\n",cs++,ans);
    }
}
