#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    char str[105];
    while(scanf("%s",str)!=EOF){
        int len = strlen(str);
        for(int i=1; i<len; i++) printf("9");
        printf("8");
        for(int i=1; i<len; i++) printf("0");
        printf("1\n");
    }
    return 0;
}
