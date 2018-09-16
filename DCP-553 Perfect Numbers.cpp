#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll _pow(ll b, ll p)
{
    if(p==0) return 1;
    ll x = pow(b, p/2);
    x*=x;
    if(p%2==1) x*=b;
    return x;
}
int main()
{
    ll lim = pow(1e18, 0.25);
    map<ll, int> mp;
    for(ll i=1; i<=lim ; i++){
        ll now = _pow(i,4);
        mp[now]++;
    }
    lim =  pow(1e18, 1.0/3.0);
    set<ll> num;
    for(ll i=1; i<=lim ; i++){
        ll now = _pow(i,3);
        if(mp.find(now)!=mp.end())
            num.insert(now);
    }
    //cout<<num.size()<<endl;
    vector<ll> v;
    auto it = num.begin();
    while(it!=num.end()){
        v.push_back(*it);
        it++;
    }
    int tc;
    scanf("%d",&tc);
    ll l, r;
    while(tc--){
        scanf("%lld%lld",&l,&r);
        int ans = 0;
        for(int i=0;i <v.size(); i++){
            if(v[i]>=l && v[i]<=r){
                ans++;
            }
        }
        printf("%d\n",ans);
    }
}
