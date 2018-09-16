#define ONLINE_JUDGE 1
#include <iostream>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
	if(b==0) return a;
	else return gcd(b, a%b);
}
ll lcm(ll a, ll b)
{
	return (a*b)/gcd(a,b);
}
int main() {
	// your code goes here
	int tc; cin>>tc;
	ll a,b;
	while(tc--){
		cin>>a>>b;
		cout<<lcm(2*a, 2*b)<<endl;
	}
	return 0;
}