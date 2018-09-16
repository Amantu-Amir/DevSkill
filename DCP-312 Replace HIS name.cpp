#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n;getchar();
    for(int t=1; t<=n; t++){
        getline(cin,str);
        int x = -1;
        string ans = str;
        vector<int> f;
        while(str.find("Sharif", x+1)!= string::npos){
            x = str.find("Sharif", x+1);
            f.push_back(x);
        }
        //cout<<f.size()<<endl;
        for(int i=0; i<f.size(); i++){
            if(f[i]==0){
                int p = f[i]+6;
                if(p<str.size() || !isalpha(str[p])){
                    ;
                }
                else f[i]=(-1*f[i]);
            }
            else{
                int p = f[i]-1;
                int q = f[i]+6;
                if(!isalpha(str[p]) && !isalpha(str[q])){
                    ;
                }
                else f[i] = (-1 * f[i]);
            }
        }
        printf("Case %d: ",t);
        for(int i=0; i<str.size(); i++){
            if(find(f.begin(), f.end(),i) != f.end()){
                cout<<"Officer";
                i+=5;
            }
            else cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
