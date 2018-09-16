#define ONLINE_JUDGE 1
#include<stdio.h>
#include<string.h>
int ans[100002];
void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }
int main()
{
    int tc,n,m,a,i;
    fastscan(tc);
    while(tc--){
        fastscan(n);
        fastscan(m);
        int  prev = 0;
        ans[0] = 0;
        int sum = 0;
        while(n--){
            fastscan(a);
            sum+=a;
            for(i = prev+1; i<=(prev+a) && i<=100000; i++)
                ans[i] = ans[prev]+1;
            prev+=a;
            if(prev>100000) break;
        }
        if(n>0)
            while(n--)
                fastscan(a);
        while(m--){
            fastscan(a);
            printf("%d\n",a>sum? -1: ans[a]);
        }
    }
    return 0;
}


