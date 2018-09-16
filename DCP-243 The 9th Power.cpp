#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

int main()
{
    ll n,a;
    cin>>n;
    while(n--){
        cin>>a;
        a%2==0 ? printf("1\n") : printf("9\n");
    }
    return 0;
}
