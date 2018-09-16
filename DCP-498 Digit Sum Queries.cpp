#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int tree[mx*4];
int sod[mx], input[mx];
void build(int pos, int b, int e)
{
    if(b>e) return;
    if(b==e){
        tree[pos] = sod[b];
        return;
    }
    int m = (b+e)/2;
    int l = pos*2;
    int r = l+1;
    build(l,b,m);
    build(r,m+1,e);
    tree[pos] = max(tree[l] , tree[r]);
}
int query(int pos, int b, int e, int i, int j)
{
    if(b>e|| b>j|| e<i) return -1;
    if(b>=i && e<=j){
        return tree[pos];
    }
    int m = (b+e)/2;
    int l = pos*2;
    int r = l+1;
    return max(query(l,b,m,i,j), query(r,m+1,e,i,j));
}
int sumofdigit(int n)
{
    int ret = 0;
    while(n>0){
        int tem = n%10;
        n/=10;
        ret+=tem;
    }
    return ret;
}
int main()
{
    int tc,cs=1,n,q,a,l,r;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d%d",&n,&q);
        memset(tree,0,sizeof tree);
        unordered_map<int, vector<int> >mp;
        for(int i=1; i<=n; i++){
            scanf("%d",&a);
            input[i] = a;
            sod[i] = sumofdigit(a);
            mp[sod[i]].push_back(i);
        }
        build(1,1,n);
        printf("Case #%d:\n",cs++);
        while(q--){
            scanf("%d%d",&l,&r);
            int val = query(1,1,n,l,r);
            int id = mp[val][lower_bound(mp[val].begin(), mp[val].end(),l)-mp[val].begin()];
            printf("%d %d\n",val,id);
        }
    }
    return 0;
}
