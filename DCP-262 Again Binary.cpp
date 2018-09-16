#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,n,t;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++){
        scanf("%d",&a);
        printf("%d ",a);
        if(a==1) printf("000\n");
        else if(a==2) printf("010\n");
        else printf("110\n");
    }
    return 0;
}
