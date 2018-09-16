
#include<bits/stdc++.h>
using namespace std;
#define mx 100002
int sum[mx];
char str[mx];
int s;
int solved(int n, int m)
{
    for(int i=1, j=m; j<=n; j++, i++){
        int res = sum[j] - sum[i-1];
        if(res>=s) return 1;
    }
    return 0;
}
int main()
{
    int tc,len, cs=1;
    scanf("%d", &tc);
    sum[0]= 0;
    int n,a;
    while(tc--){
        scanf("%d%d",&n,&s);
        for(int i=1; i<=n; i++){
            scanf("%d", &a);
            sum[i] = sum[i-1] + a;
        }
        if(sum[n]<s){
            printf("Case %d: -1\n",cs++);
            continue;
        }
        int ans = 1000000, lo=0, hi = n, mid;
        while(lo<=hi){
            mid = (lo+hi)/2;
            if(solved(n, mid)){
                ans = min(ans, mid);
                hi = mid-1;
            }
            else lo = mid+1;
        }
        printf("Case %d: %d\n",cs++, ans);
    }
}

