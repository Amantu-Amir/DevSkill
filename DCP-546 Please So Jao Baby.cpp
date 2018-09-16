#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 20000
vector<ll>sum(mx+1);
int main()
{
    int tc,k,a;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&k);
        sum[0] = 0;
        for(int i=1; i<=mx; i++){
            scanf("%d",&a);
            sum[i] = sum[i-1] + a;
        }
        int ans = mx;
        for(int i=1; i<mx; i++){
            auto it =  lower_bound(sum.begin(), sum.end(), sum[i-1]+k);
            if(it == sum.end()) continue;
            int j = it-sum.begin();
            if(ans>(j-i+1)){
                ans = (j-i+1);
            }
        }
        printf("%d\n",ans);
    }
}
