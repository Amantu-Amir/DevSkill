#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    int tc,n;
    int arr[100006];
    scanf("%d", &tc);
    while(tc--){
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int res[n] = {0};
        int mx = arr[n-1], val = 0;
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=mx){
                mx = arr[i];
            }
            else{
                res[i] = res[i+1]+1;
            }
        }
        printf("%d", res[0]);
        for(int i=1; i<n; i++){
            printf(" %d",res[i]);
        }
        printf("\n");
    }
    return 0;
}
