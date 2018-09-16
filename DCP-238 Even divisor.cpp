#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
ll ara[10000001] = {0};
int main()
{
    for(ll i=2; i<=10000000; i+=2){
        for(ll j = i; j<=10000000; j+=i)
            ara[j]+=i;
    }
    //return 0;
    int tc;
    cin>>tc;
    int num, x,d;
    while(tc--){
        scanf("%d",&num);
        printf("%lld\n", ara[num]);
    }
    return 0;
}
