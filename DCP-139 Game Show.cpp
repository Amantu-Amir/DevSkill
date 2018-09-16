#include<bits/stdc++.h>
#define ll long long
using namespace std;
char str[1003];
int main()
{
    int tc, cs=1;
    scanf("%d", &tc);
    int n,m;
    while(tc--){
        scanf("%d%d", &n, &m);
        scanf("%s", str);
        vector<int> ans;
        vector<int> mp[10];
        for(int i=0; i<n; i++){
            int a = str[i] - '0';
            mp[a].push_back(i);
        }
        m = n-m;
        int id = 0;
        while(m){
            int r = n - m;
            for(int i=9; i>=0; i--){
                if(mp[i].empty()) continue;
                auto it = lower_bound(mp[i].begin(), mp[i].end(), id);
                if(it==mp[i].end()) continue;
                int xxx = it - mp[i].begin();
                if(mp[i][xxx]>r) continue;
                ans.push_back(i);
                id = mp[i][xxx]+1;
                break;
            }
            m--;
        }
        printf("Case %d: ", cs++);
        for(int i=0; i<ans.size(); i++)
            printf("%d", ans[i]);
        printf("\n");
    }
}
