#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void scan( ll& num ) {
    //scanf("%lld",&num);
	num = 0;
	char c = getchar();
	int flag = 0;
	while ( !((c >= '0' & c <= '9') || c == '-') ) {
		c = getchar_unlocked();
	}
	if ( c == '-' ) {
		flag = 1;
		c = getchar_unlocked();
	}
	while ( c >= '0' && c <= '9' ) {
		num = (num << 1) + (num << 3) + c - '0';
		c = getchar_unlocked();
	}
	if ( flag == 1 ) {
		num = 0 - num;
	}
}
ll c;
ll bigMultiply(ll a, ll b)
{
    if(b==0) return 0;
    if(b%2==0){
        return (2LL* bigMultiply(a, b/2))%c;
    }
    else{
        return (a + bigMultiply(a,b-1))%c;
    }
}
ll bigMod(ll b, ll p)
{
    if(p==0) return 1LL;
    ll x = bigMod(b,p/2);
    x = bigMultiply(x,x);
    if(p%2==1) x = bigMultiply(x,b);
    return x;
}
int main()
{
    ll a,b,ans;
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--){
        scan(a);
        scan(b);
        scan(c);
        ans = bigMod(a,b);
        printf("Case %d: %lld\n",cs++,ans);
    }
}
