#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[13] = {0,1,1,3,3,5,5,2,2,8,8};
struct User
{
    int score;
    string name;
    User(int _score, string _name)
    {
        score = _score;
        name = _name;
    }
    bool operator<(const User& ob)const
    {
        if(score==ob.score)
            return name<ob.name;
        return score>ob.score;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    int n,a,x;
    vector<User> v;
    cin>>n;
    string str;
    for(int nn=1; nn<=n; nn++){
        cin>>str;
        cin>>a;
        int sum = 0;
        for(int i=1; i<=a; i++){
            cin>>x;
            sum+=arr[x];
        }
        v.push_back(User(sum, str));
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
       cout<<v[i].name<<endl;
    }
}
