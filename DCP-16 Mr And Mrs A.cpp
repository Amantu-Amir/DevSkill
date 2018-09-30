#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> arr;
void preCalc()
{
    unordered_set<ll> st;
    for(ll i=2; i<=1000000; i++){
        for(ll res=i*i; res<=1000000000000LL; res*=i)
            st.insert(res);
    }
    for(auto it = st.begin(); it!=st.end(); it++)
        arr.push_back(*it);
    sort(arr.begin(), arr.end());
}
int main()
{
    int tc,cs=1;
    ll l,r;
    preCalc();
    scanf("%d",&tc);
    while(tc--){
        scanf("%lld%lld",&l,&r);
        int a = lower_bound(arr.begin(), arr.end(), l) - arr.begin();
        int b = upper_bound(arr.begin(), arr.end(), r) - arr.begin();
        printf("Case %d: %d\n",cs++,  b-a);
    }
    return 0;
}
