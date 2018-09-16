#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
int child[10005];
int main()
{
    int tc,n,a,b;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        memset( child, 0, sizeof child);
        for(int i=1; i<n; i++){
            scanf("%d%d",&a, &b);
            child[a]++;
        }
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(child[i]==0)
                ans++;
        }
        printf("%d\n", ans);
    }

    return 0;
}
