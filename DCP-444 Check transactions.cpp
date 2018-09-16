#define ONLINE_JUDGE 1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc,a,b,c,n;
    scanf("%d",&tc);
    char str[5];
    while(tc--){
        scanf("%lld%lld",&a,&b);
        scanf("%lld",&n);
        bool ans = true;
        while(n--){
            scanf("%s%lld",str, &c);
            if(strcmp(str,"out")==0){
                a-=c;
            }
            else{
                a+=c;
            }
            if(a<0){
                ans = false;
            }
        }
        if(a!=b) ans = false;
        printf("%s\n",ans?"yes":"no");
    }
    return 0;
}
