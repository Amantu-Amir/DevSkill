#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long int ll;
int main()
{
    string s1,s2,s3;
    int n,y;
    cin>>n;
    while(n--){
        cin>>s1>>s2>>s3>>y;
        if(s2=="naya")
            printf("Shuvo nobo borsho %d\n",y-650);
        else printf("Shuva naya barsha %d\n",y+650);



    }

    return 0;
}

