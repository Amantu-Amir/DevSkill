#define ONLINE_JUDGE 1
#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    int n;
    ll a;
    int tc;
    scanf("%d", &tc);
    while(tc--){
        cin>>n;
        map<int, int> mp;
        while(n--){
            scanf("%lld", &a);
            mp[a%6]++;
        }
        ll ans = 0;
        ll tem = mp[0];
        ans = ((tem-1)*(tem))/2;
        tem = mp[1] * mp[5];
        ans+=tem;
        tem = mp[2] * mp[4];
        ans+=tem;
        tem = mp[3];
        ans =ans+ ((tem-1)*(tem))/2;
        printf("%lld\n", ans);
    }


    return 0;
}

