#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc,n,a;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        if(n==1)
            printf("%d\n",3);
        else{
            printf("%d",1);
            for(int i=2; i<=(n-1); i++)
                printf("%d",0);
            printf("2\n");
        }
    }
}
