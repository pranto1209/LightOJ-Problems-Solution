#include<bits/stdc++.h>
using namespace std;
#define maxn 505
string grid[maxn];
int a[maxn*maxn], vis[maxn][maxn], num[maxn][maxn];
int fx[] = {+1,-1,+0,+0};
int fy[] = {+0,+0,+1,-1};
int n, m, q, id, cnt;
void dfs(int x, int y)
{
    if(grid[x][y]=='C') cnt++;
    vis[x][y]=1;
    num[x][y]=id;
    for(int i=0; i<4; i++){
        int nx=x+fx[i];
        int ny=y+fy[i];
        if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && grid[nx][ny]!='#'){
            dfs(nx, ny);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        memset(vis, 0, sizeof vis);
        memset(num, 0, sizeof num);
        memset(a, 0, sizeof a);
        cin>>n>>m>>q;
        for(int i=0; i<n; i++) cin>>grid[i];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j]!='#'){
                    cnt=0;
                    dfs(i, j);
                    a[id]=cnt;
                    id++;
                }
            }
        }
        printf("Case %d:\n", tc);
        for(int i=0; i<q; i++){
            int x, y;
            cin>>x>>y;
            printf("%d\n", a[num[x-1][y-1]]);
        }
    }
}
