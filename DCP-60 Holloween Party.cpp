
#include<bits/stdc++.h>
using namespace std;
#define mx 1005
#define inf 19999999
char grid[mx][mx];
int cost[mx][mx];
int dirx[] = {-1, 0, 1, 0};
int diry[] = {0, 1, 0, -1};
struct Point
{
    int x,y;
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    bool operator ==(const Point &ob)const
    {
        return x==ob.x && y==ob.y;
    }
};
int n,m;
void bfs(Point s)
{
    cost[s.x][s.y] = 0;
    Point p(0,0);
    deque<Point> dq;
    dq.push_front(s);
    while(!dq.empty()){
        p = dq.front();
        dq.pop_front();
        for(int i=0; i<4; i++){
            int xx = p.x+dirx[i];
            int yy = p.y+diry[i];
            if(xx>=0 && xx<n && yy>=0 && yy<m){
                if(grid[xx][yy] == grid[p.x][p.y]){
                    if(cost[xx][yy] > cost[p.x][p.y]){
                        cost[xx][yy] = cost[p.x][p.y];
                        dq.push_front(Point(xx,yy));
                    }
                }
                else{
                    if(cost[xx][yy] > cost[p.x][p.y]+1){
                        cost[xx][yy] = cost[p.x][p.y] + 1;
                        dq.push_back(Point(xx,yy));
                    }
                }
            }
        }
    }
}
int main()
{
    int tc;
    char str[mx];
    scanf("%d", &tc);
    for(int cs=1; cs<=tc; cs++){
        scanf("%d%d",&n,&m);
        for(int i=0; i<n; i++){
            for(int j = 0; j<m; j++)
                cost[i][j] = inf;
        }
        for(int i=0; i<n; i++){
            scanf("%s", grid[i]);
        }
        bfs(Point(0,0));
        printf("Case %d: %d\n", cs, cost[n-1][m-1]);
    }

    return 0;
}
