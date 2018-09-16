#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
ll ara[1000001];
int main()
{
    int tc;
    cin>>tc;
    for(int t=1 ;t<=tc; t++){
        int mx = -100;
        int mn = 10000;
        int num,n=0;
        while(cin>>num){
            char c = getchar();
            n++;
            mx = max(mx, num);
            mn = min(mn,num);
            if(c!=' ') break;
        }
        printf("Case %d: Among %d numbers %d is maximum and %d is minimum\n",t,n,mx, mn);
    }
    return 0;
}
