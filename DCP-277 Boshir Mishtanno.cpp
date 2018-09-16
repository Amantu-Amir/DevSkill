#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,t;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++){
        scanf("%d%d",&a, &b);
        //cout<<a<<" "<<b<<endl;
        ll ans = 0;
        while(a*b>0){
            ans= ans+(a*b);
            a--;
            b--;
            //cout<<"ans: "<<ans<<endl;
        }
        ans*=15;
        printf("Case %d: %lld\n",tc, ans);
    }
    return 0;
}
