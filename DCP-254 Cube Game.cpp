#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tc; scanf("%d",&tc);
    int a,b,c,d;
    int high = -1000000000;
    for(int t=1; t<=tc; t++){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int ans = 0;
        ans = ans + (1*a) + (3*b) + (10*c) - (5*d);
        high = max(high, ans);
        if(ans<0) ans=0;
        printf("Player %d: %d\n",t,ans);
    }
    printf("High Score = %d\n",high);
    return 0;
}

