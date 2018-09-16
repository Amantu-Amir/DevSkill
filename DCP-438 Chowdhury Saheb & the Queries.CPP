#include<bits/stdc++.h>
using namespace std;
#define mx 100002
#define ll long long
ll tree[mx*4];
int arr[mx];
void build(int pos, int b, int e)
{
    if(b>e) return;
    if(b==e){
        tree[pos] = arr[b];
        return;
    }
    int m = (b+e)/2;
    int l = pos*2;
    int r = l+1;
    build(l,b,m);
    build(r,m+1,e);
    tree[pos] = tree[l] + tree[r];
}
ll query(int pos, int b, int e, int i, int j)
{
    if(b>e || b>j || e<i) return 0;
    if(b>=i && e<=j){
        return tree[pos];
    }
    int m = (b+e)/2;
    int l = pos*2;
    int r = l+1;
    ll ret1 = query(l,b,m,i,j);
    ll ret2 = query(r,m+1,e,i,j);
    return (ret1 + ret2);
}
void update(int pos, int b, int e, int i, int j, int val)
{
    if(b>e || b>j || e<i) return;
    if(b>=i && e<=j){
        tree[pos] = val;
        return;
    }
    int m = (b+e)/2;
    int l = pos*2;
    int r = l+1;
    update(l,b,m,i,j,val);
    update(r,m+1,e,i,j,val);
    tree[pos] = tree[l] + tree[r];
}

int main()
{
    int n,q,a,b,typ;
    ll c;
    scanf("%d%d",&n,&q);
    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);
    build(1,1,n);
    while(q--){
        scanf("%d",&typ);
        if(typ==1){
            scanf("%d%lld",&a,&c);
            int lo = 0, hi = (n-a+1), mid, ans = 0;;
            while(lo<=hi){
                mid = (lo+hi)/2;
                ll sum = query(1,1,n,a,a+mid-1);
                if(sum<=c){
                    ans = max(ans, mid);
                    lo = mid+1;
                }
                else{
                    hi = mid-1;
                }
            }
            printf("%d\n",ans);
        }
        else{
            scanf("%d%d",&a,&b);
            update(1,1,n,a,a,b);
        }
    }
}
