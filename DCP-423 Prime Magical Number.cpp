#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define mx 100005
int arr[mx] = {0};
int cum[mx] = {0};
int main()
{
    for(int i=1; i<mx; i++){
        int num = i;
        bool p = false;
        while(num>0){
            int t = num%10;
            num/=10;
            if(t==2 || t==3 || t==5 || t==7){
                p = true;
                break;
            }
        }
        if(p)
            arr[i] = 1;
    }
    for(int i=1; i<mx; i++){
        cum[i] = cum[i-1] + arr[i];
    }
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        cout<<cum[n]<<endl;
    }
    return 0;
}

