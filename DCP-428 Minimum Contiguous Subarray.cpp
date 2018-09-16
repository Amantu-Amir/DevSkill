#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans = 0;
        int idx = 0;
        while(idx<n){
            ans++;
            int val = arr[idx];
            idx++;
            while(idx<n && arr[idx]==val){
                idx++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
