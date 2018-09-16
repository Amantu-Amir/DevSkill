#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

int main()
{
    string s;
    int tc;
    cin>>tc;
    while(tc--){
        cin>>s;
        bool f = false;
        for(int i = s.size()-1; i>=0; i--){
            if(s[i]=='r'){
                f = true;
                break;
            }
        }
        if(f==false)
            printf("Vely easy\n");
        else
            printf("Not vely easy\n");
    }
    return 0;
}


