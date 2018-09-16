#define ONLINE_JUDGE 1

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct str
{
    char c;
    int occ;
    bool operator<(const str &ob)const
    {
        if(occ==ob.occ)
            return c<ob.c;
        else return
            occ>ob.occ;
    }
};
int main()
{
    int tc,n, cs=1;
    string s;char ch;
    scanf("%d",&tc);
    str ob;
    while(tc--){
        getchar();
        getline(cin,s);
        map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            ch = s[i];
            if(isupper(ch))mp[ch]++;
        }
        map<char, int> :: iterator it = mp.begin();
        vector<str> v;
        while(it  != mp.end()){
            ob.c = it->first;
            ob.occ = it->second;
            v.push_back(ob);
            it++;
        }
        sort(v.begin(), v.end());
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        printf("Case %d: ", cs++);
        int k=0;
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<=arr[i]; j++)
                printf("%c", v[k++].c);
            if(i != n-1)printf(" ");
        }
        printf("\n");
    }


    return 0;
}

