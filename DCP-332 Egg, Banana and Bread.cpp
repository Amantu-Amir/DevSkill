#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define inf 100000008
#define ll long long
int x,y,z;
int lim;
bool bs[1000003];
int ans;
void fun(int i, int j, int sum)
{
    if(sum<0) return;
    if(j==4){
        ans = min(ans, sum);
        return;
    }
    if(sum==0) return;
    if(bs[sum]==1) return;
    if(j==1){
        fun(i+1, j+1, sum-x-((ll)y*i));
        fun(i+1, j, sum-x);
    }
    if(j==2){
        fun(i+1, j+1, sum-y-((ll)z*i));
        fun(i+1, j, sum-y);
    }
    if(j==3){
        ll xxx = sum/z;
        if(xxx==0) xxx++;
        fun(i+xxx, j, sum-(z*xxx));
        fun(i+xxx, j+1, sum-(z*xxx));
//        fun(i+1, j, sum-z);
//        fun(i+1, j+1, sum-z);
    }
    bs[sum] = 1;
}
int main()
{
    int tc,s;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d%d%d",&x, &y, &z );
        scanf("%d", &s);
        ans = inf;
        memset(bs, 0, sizeof bs);
        fun(1,1,s);
        if(ans==inf) ans = -1;
        printf("%d\n",ans);
    }
}
