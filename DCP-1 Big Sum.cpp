
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1,str2;
    while(cin>>str){
        for(int i = str.size()-1; i>=0; i--){
            if(str[i]==','){
                str[i] = ' ';
                break;
            }
        }
        istringstream iss(str);
        iss>>str1;
        iss>>str2;
        vector<int> v;
        int i=0, j=0, carry = 0;
        while(i<str1.size() && j<str2.size()){
            int now = carry  + (str1[i++]-'0') + (str2[j++]-'0');
            v.push_back(now%10);
            carry = now/10;
        }
        while(i<str1.size() ){
            int now = carry  + (str1[i++]-'0');
            v.push_back(now%10);
            carry = now/10;
        }
        while(j<str2.size()){
            int now = carry  +  (str2[j++]-'0');
            v.push_back(now%10);
            carry = now/10;
        }
        if(carry) v.push_back(carry);
        carry = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i]==0){
                if(carry)
                    cout<<v[i];
            }
            else{
                cout<<v[i];
                carry = 1;
            }
        }
        cout<<endl;
    }
}
