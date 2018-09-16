#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

int main()
{
    int tc,s,a;char c;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&s);
        map<int, int> app;
        for(int i=1; i<=s; i++){
            while(1){
                scanf("%d%c",&a, &c);
                app[a]++;
                if(c!=' ')
                    break;
            }
        }
        vi ans;
        map<int, int> ::iterator it = app.begin();
        while(it != app.end()){
            if(it->second == s)
                ans.push_back(it->first);
            it++;
        }
        int sz = ans.size();
        if(sz==0)
            printf("Empty\n");
        else{
            for(int i=0; i<sz; i++){
                printf("%d", ans[i]);
                if(i==sz-1)
                    printf("\n");
                else printf(" ");
            }
        }
    }
    return 0;
}

