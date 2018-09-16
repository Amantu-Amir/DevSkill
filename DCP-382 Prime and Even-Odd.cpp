#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(cin>>n>>m){
        if(n>m)
            swap(n,m);
        if(n==1){
            if(n==m)
                printf("Even\n");
            else
                printf("Odd\n");
        }
        else printf("Even\n");
    }

    return 0;
}
