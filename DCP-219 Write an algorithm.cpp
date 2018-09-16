#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct node
{
    int a, b;
    int pos;
    node(int x, int y,int z){
        a = x,b=y,pos = z;
    }
};
int main()
{
    int tc,a,b;char c;

    while(scanf("%d",&tc) != EOF){
        map<char, vector<node> > m;
        int st=0;
        for(int t=1; t<=tc; t++){
            scanf("%d%c%d",&a,&c,&b);
            printf("Instruction %d: ",t);
            if(c=='+'){
                vector<node> v = m['+'];
                int sz = v.size();
                bool found = false;
                for(int i=0; i<sz; i++){
                    if(v[i].a==a && v[i].b==b){
                        printf("repeat step %d\n",v[i].pos);
                        found = true;
                        break;
                    }
                }
                if(found == false){
                    printf("add %d to %d\n",a,b);
                    m['+'] .push_back(node(a,b,++st));
                    m['+'] .push_back(node(b,a,st));
                }
            }
            else if(c=='*'){
                vector<node> v = m['*'];
                int sz = v.size();
                bool found = false;
                for(int i=0; i<sz; i++){
                    if(v[i].a==a && v[i].b==b){
                        printf("repeat step %d\n",v[i].pos);
                        found = true;
                        break;
                    }
                }
                if(found == false){
                    printf("multiply %d with %d\n",a,b);
                    m['*'] .push_back(node(a,b,++st));
                    m['*'] .push_back(node(b,a,st));
                }
            }
            else if(c=='/'){
                vector<node> v = m['/'];
                int sz = v.size();
                bool found = false;
                for(int i=0; i<sz; i++){
                    if(v[i].a==a && v[i].b==b){
                        printf("repeat step %d\n",v[i].pos);
                        found = true;
                        break;
                    }
                }
                if(found == false){
                    printf("divide %d by %d\n",a,b);
                    m['/'] .push_back(node(a,b,++st));
                }
            }
            else{
                vector<node> v = m['-'];
                int sz = v.size();
                bool found = false;
                for(int i=0; i<sz; i++){
                    if(v[i].a==a && v[i].b==b){
                        printf("repeat step %d\n",v[i].pos);
                        found = true;
                        break;
                    }
                }
                if(found == false){
                    printf("subtract %d from %d\n",b,a);
                    m['-'] .push_back(node(a,b,++st));
                }
            }
        }
    }
    return 0;
}

