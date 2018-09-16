#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    int tc,cs=1;
    scanf("%d", &tc);
    ll n,k;
    vector<ll> v;
    ll val = 1;
    for(int i=1; i<64; i++){
        v.push_back(val);
        val*=2;
    }
    for(int i=1; i<63; i++){

        v[i] = v[i-1] + v[i];
    }
    while(tc--){
        scanf("%lld%lld", &n, &k);
        printf("Case %d: %d\n",cs++,lower_bound(v.begin(), v.end(),(ceil)((double)k/(double)n)) - v.begin()+1);
    }
    return 0;
}
