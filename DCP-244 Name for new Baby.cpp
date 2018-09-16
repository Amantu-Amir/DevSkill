#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
const int m  = 1000000007;
ll BigMod(int a, int p)
{
    if(p==0) return 1%m;
    ll x = BigMod(a, p/2);
    x = (x*x)%m;
    if(p&1) x = (x*a)%m;
    return x;
}
int main()
{
    int tc; ll len;
    int start, last, mid,rem;
    cin>>tc;
    while(tc--){
        cin>>len;
        start= last= mid=rem = 0;
        if(len==1){
            start = 1;
        }
        else if(len == 2){
            start = last = 1;
        }
        else{
            mid = 2;
            if(len&1) mid = 1;
            start = last = 1;
        }
        rem = len-start-last-mid;
        //printf("lan %d start %d last %d mid %d rem %d\n",len,start, last, mid, rem);
        ll ans = BigMod(26, start+last+mid);
        ll x = BigMod(52, rem);
        ans = (ans*x)%m;
        cout<<ans<<endl;
    }
    return 0;
}

