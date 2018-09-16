#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc,n,a;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        int arr[n] = {0};
        int ans;
        for(int i=1; i<=n; i++){
            scanf("%d",&a);
            arr[a]++;
            if(arr[a]==2)
                ans = a;
        }
        printf("%d\n",ans);
    }
}
