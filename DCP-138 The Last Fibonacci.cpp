#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int sz = 65;
ll ara[sz];
int ans[sz+1];
int main()
{
    ara[0]=1;ara[1]=1;
    ans[1]=ans[2]=1;
    for(int i=2; i<sz; i++){
        ara[i] = ara[i-1]+ara[i-2];
        ans[i+1] = (ara[i]%10);
    }
    int tc;ll n;
    scanf("%d",&tc);
    for(int t=1; t<=tc; t++){
        cin>>n;
        printf("Case %d: %d is the last digit.\n",t,ans[n%60]);
    }
    return 0;
}

