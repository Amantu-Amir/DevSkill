#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0)
char str[101];
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--){
        scanf("%s",str);
        int len = strlen(str);
        unsigned int sum=0;
        for(int i=0; i<len; i++) sum+=((int)str[i]);
        printf("%s\n",(sum%20==0) ? "Yes" : "No");
    }
    return 0;
}
