#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0)
int main()
{
    int tc,n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        printf("%s\n",(n%3!=0) ? "First" : "Second");
    }
    return 0;
}
