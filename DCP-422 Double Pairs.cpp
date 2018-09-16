#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100005
ll input[mx];
int tree[mx*8];
void update(int pos, int b, int e, int i, int j)
{
    if(b>e || b>j || e<i) return;
    if(b>=i && e<=j){
        tree[pos]++;
        return;
    }
    int m = (b+e)/2;
    int l = pos*2;
    int r = l+1;
    update(l, b,m,i,j);
    update(r,m+1,e,i,j);
    tree[pos] = tree[l] + tree[r];
}
int query(int pos, int b, int e, int i, int j)
{
    if(b>e || b>j || e<i) return 0;
    if(b>=i && e<=j){
        return tree[pos];
    }
    int m = (b+e)/2;
    int l = pos*2;
    int r = l+1;
    return (query(l, b,m,i,j) + query(r,m+1,e,i,j));
}
int main()
{
    int tc,n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        set<ll> st;
        for(int i=1; i<=n; i++){
            scanf("%lld",&input[i]);
            st.insert(input[i]);
            st.insert(input[i]/2);
        }
        map<ll, int> mp;
        int val = 0;
        auto it = st.begin();
        while(it!=st.end()){
            mp[ (*it) ] = ++val;
            it++;
        }
        memset(tree, 0, sizeof tree);
        ll ans = 0;
        for(int i=1; i<=n; i++){
            int x = mp[input[i]/2];
			//cout<<1<<" to "<<x<<" = "<<query(1,1,val,1,x)<<endl;
            ans+=query(1,1,val,1,x);
            x = mp[ input[i] ];
			//cout<<"up: "<<x<<endl;
            update(1,1,val,x,x);
			//cout<<"ttt: "<<tree[1]<<endl;
        }
        printf("%lld\n",ans);
    }
}
