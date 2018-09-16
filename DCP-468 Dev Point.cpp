#define ONLINE_JUDGE 1
#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define vi vector<int>
#define mx 100005
ll arr[mx],offer[mx],tree[mx*4],lazy[mx*4],sum[mx*4];
void buildTree(ll pos, ll b, ll e)
{
    if(b>e) return;
    if(b==e){
        tree[pos] = arr[b];
        return;
    }
    ll m = (b+e)/2;
    ll l = pos*2;
    ll r = l+1;
    buildTree(l,b,m);
    buildTree(r,m+1,e);
    tree[pos] = tree[l] + tree[r];
}
void updateTree(ll pos, ll b, ll e, ll i, ll j, ll add)
{
    //cout<<"upd: "<<b<<" "<<e<<endl;
    ll m = (b+e)/2;
    ll l = pos*2;
    ll r = l+1;
    if(lazy[pos]!=0){
        tree[pos] = tree[pos] + lazy[pos]*(e-b+1);
        if(b!=e){
            lazy[l]+=lazy[pos];
            lazy[r]+=lazy[pos];
        }
        lazy[pos] = 0;
    }
    if(b>e || b>j || e<i) return;
    if(b>=i && e<=j){
        tree[pos] = tree[pos] + add*(e-b+1);
        if(b!=e){
            //cout<<"here: add = "<<add<<endl;
            lazy[l]+=add;
            lazy[r]+=add;
            //cout<<lazy[l] <<" "<<lazy[r]<<endl;
        }
        return;
    }
    updateTree(l,b,m,i,j,add);
    updateTree(r,m+1,e,i,j,add);
    tree[pos] = tree[l] + tree[r];
}
ll queryTree(ll pos, ll b, ll e, ll i, ll j)
{
    //cout<<"query "<<b<<" "<<e<<" "<<endl;
    ll m = (b+e)/2;
    ll l = pos*2;
    ll r = l+1;
    if(lazy[pos]!=0){
        tree[pos] = tree[pos] + lazy[pos]*(e-b+1);
        if(b!=e){
            lazy[l]+=lazy[pos];
            lazy[r]+=lazy[pos];
        }
        lazy[pos] = 0;
    }
    if(b>e || b>j || e<i) return 0;
    if(b>=i && e<=j){
        //cout<<"here "<<b<<" "<<e<<endl;
        return tree[pos];
    }
    ll ret1 = queryTree(l,b,m,i,j);
    ll ret2 = queryTree(r,m+1,e,i,j);
    return (ret1+ret2);
}

int main()
{
    //faster;
    ll tc,cs=1,n,m,q,x,y,l,r;
    scanf("%lld",&tc);
    while(tc--){
        scanf("%lld%lld%lld",&n,&m,&q);
        for(ll i=1; i<=n; i++){
            scanf("%lld",&arr[i]);
        }
        memset(lazy,0,sizeof lazy);
        memset(tree,0,sizeof tree);
        buildTree(1,1,n);
        sum[0] = 0;
        for(ll i=1; i<=m; i++){
            scanf("%lld",&offer[i]);
            sum[i] = sum[i-1] + offer[i];
        }
        while(q--){
            scanf("%lld%lld%lld%lld",&x,&y,&l,&r);
            ll add = sum[y]-sum[x-1];
            //cout<<"add: "<<add<<endl;
            updateTree(1,1,n,l,r,add);
        }
        printf("Case %lld:\n",cs++);
        printf("%lld",queryTree(1,1,n,1,1));
        //cout<<endl;
        for(ll i=2; i<=n; i++){
            printf("% lld",queryTree(1,1,n,i,i));
            //cout<<endl;
        }
        printf("\n");
    }
    return 0;
}
