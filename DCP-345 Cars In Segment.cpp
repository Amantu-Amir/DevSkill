#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,q,x,y,t,cs=1;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d%d",&n, &q);
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        sort(arr.begin(), arr.end());
        printf("Case %d:\n", cs++);
        while(q--){
            scanf("%d%d%d",&x,&y,&t);
            if(x>y) swap(x,y);
            x-=t;y-=t;
            int a = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
            int b = upper_bound(arr.begin(), arr.end(), y) - arr.begin();
            printf("%d\n", b-a);
        }
    }
}
