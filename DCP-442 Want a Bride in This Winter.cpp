#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    int arr[100005] = {0};
    for(int i=1; i<=100000; i++){
        ll num = i;
        ll tem = (num*num) + (num*num*num);
        ll sq = sqrt(tem);
        if(sq*sq == tem)
            arr[i] = 1;
    }
    for(int i=1; i<=100000; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    int tc,n,k;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d%d", &n, &k);
        if(arr[n]==k) printf("I am married now\n");
        else printf("Baba amar ki biye hobe na\n");
    }
    return 0;
}
