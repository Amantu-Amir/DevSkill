#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define pb push_back

int main()
{
    ll tc,m,n;
    cin>>tc;
    for(int t=1; t<=tc; t++){
        cin>>n>>m;
        printf("Case %d: ",t);
        if(n==1){
            if((m-n)%2==0)
                cout<<"Even"<<endl;
            else
                cout<<"Odd"<<endl;
        }
        else{
            if((m-n+1)%2==0)
                cout<<"Even"<<endl;
            else
                cout<<"Odd"<<endl;
        }
    }

    return 0;
}
