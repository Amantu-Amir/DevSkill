#include<bits/stdc++.h>
using namespace std;
#define mx 100005
char str[mx];
struct Node 
{
	int sum=0;
	int val=0;
	int l=0;
	int r=0;
}tree[mx*4];
void build(int pos, int b, int e)
{
	if(b>e) return;
	if(b==e){
		tree[pos].val = (str[b-1]-'0');
		tree[pos].sum = tree[pos].l = tree[pos].r = tree[pos].val;
		return;
	}
	int m = (b+e)/2;
	int l = pos*2;
	int r = l+1;
	build(l,b,m);
	build(r,m+1,e);
	tree[pos].sum = tree[l].sum + tree[r].sum;
	if(tree[l].r==1 && tree[r].l==1)
		tree[pos].sum--;
	tree[pos].l = tree[l].l;
	tree[pos].r = tree[r].r;
}
void update(int pos, int b, int e, int i, int j)
{
	if(b>e || b>j || e<i) return;
	if(b>=i && e<=j){
		tree[pos].val = (tree[pos].val+1)%2;
		tree[pos].sum = tree[pos].l = tree[pos].r = tree[pos].val;
		return;
	}
	int m = (b+e)/2;
	int l = pos*2;
	int r = l+1;
	update(l,b,m,i,j);
	update(r,m+1,e,i,j);
	tree[pos].sum = tree[l].sum + tree[r].sum;
	if(tree[l].r==1 && tree[r].l==1)
		tree[pos].sum--;
	tree[pos].l = tree[l].l;
	tree[pos].r = tree[r].r;
}
Node query(int pos, int b, int e, int i, int j)
{
	if(b>e || b>j || e<i) return tree[0];
	if(b>=i && e<=j){
		return tree[pos];
	}
	int m = (b+e)/2;
	int l = pos*2;
	int r = l+1;
	Node n1 = query(l,b,m,i,j);
	Node n2 = query(r,m+1,e,i,j);
	Node nn;
	nn.sum = n1.sum + n2.sum;
	if(n1.r==1 && n2.l==1)
		nn.sum--;
	nn.l = n1.l;
	nn.r = n2.r;
	return nn;
}
int main()
{
	int n,m,typ,x,y;
	scanf("%d%d",&n,&m);
	scanf("%s",str);
	build(1,1,n);
	while(m--){
		scanf("%d",&typ);
		if(typ==1){
			scanf("%d",&x);
			update(1,1,n,x,x);
		}
		else{
			scanf("%d%d",&x,&y);
			Node nn = query(1,1,n,x,y);
			printf("%d\n",nn.sum);
		}
	}
}