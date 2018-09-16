
#include<bits/stdc++.h>
using namespace std;
#define mx 100002
struct Node
{
    int maruf;
    int tawsif;
    int jubair;
    int feroz;
}sum[mx];
char str[mx];
int solved(int n, int m)
{
    for(int i=1, j=m; j<=n; j++, i++){
        Node res;
        res.feroz = sum[j].feroz - sum[i-1].feroz;
        res.jubair = sum[j].jubair- sum[i-1].jubair;
        res.maruf = sum[j].maruf - sum[i-1].maruf;
        res.tawsif = sum[j].tawsif - sum[i-1].tawsif;
        if(res.maruf && res.tawsif && res.jubair && res.feroz) return 1;
    }
    return 0;
}
int main()
{
    int tc,len;
    scanf("%d", &tc);
    sum[0].maruf = sum[0].tawsif = sum[0].jubair = sum[0].feroz = 0;
    while(tc--){
        scanf("%d",&len);
        scanf("%s",str);
        for(int b=1; b<=len; b++){
            if(str[b-1]=='M'){
                sum[b].maruf = 1 + sum[b-1].maruf;

                sum[b].tawsif = sum[b-1].tawsif;
                sum[b].jubair =  sum[b-1].jubair;
                sum[b].feroz =  sum[b-1].feroz;
            }
            if(str[b-1]=='T'){
                sum[b].tawsif = 1 + sum[b-1].tawsif;

                sum[b].maruf = sum[b-1].maruf;
                sum[b].jubair =  sum[b-1].jubair;
                sum[b].feroz =  sum[b-1].feroz;
            }
            if(str[b-1]=='J'){
                sum[b].jubair = 1 + sum[b-1].jubair;

                sum[b].maruf = sum[b-1].maruf;
                sum[b].tawsif = sum[b-1].tawsif;
                sum[b].feroz =  sum[b-1].feroz;
            }
            if(str[b-1]=='F'){
                sum[b].feroz = 1 + sum[b-1].feroz;

                sum[b].maruf = sum[b-1].maruf;
                sum[b].tawsif = sum[b-1].tawsif;
                sum[b].jubair =  sum[b-1].jubair;
            }
        }
        int ans = len, lo=4, hi = len, mid;
        while(lo<=hi){
            mid = (lo+hi)/2;
            if(solved(len, mid)){
                ans = min(ans, mid);
                hi = mid-1;
            }
            else lo = mid+1;
        }
        printf("%d\n",ans);
    }
}

