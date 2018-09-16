#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int sz = 100005;
ll ara[sz];
int main()
{
    ara[0]=ara[1]=ara[2]=0;
    for(int i=3; i<sz; i++){
        ara[i] = ara[i-1];
        if(i%3==0 || i%5 == 0)
            ara[i] = ara[i] + i;

    }
    int n;
    cin>>n;
    cout<<ara[n-1]<<endl;

    return 0;
}
