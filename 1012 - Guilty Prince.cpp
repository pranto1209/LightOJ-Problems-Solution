#include<bits/stdc++.h>
using namespace std;
char cell[25][25];
bool vis[25][25];
int row, col, cnt;
void dfs(int i, int j)
{
    if(i>=0 and i<row && j>=0 and j<col && cell[i][j]!='#' && !vis[i][j]){
        vis[i][j]=1;
        cnt++;
        dfs(i, j+1);
        dfs(i, j-1);
        dfs(i+1, j);
        dfs(i-1, j);
    }
}
int main()
{
    int t, x, y;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        memset(vis, 0, sizeof(vis));
        cnt=0;
        cin>>col>>row;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>cell[i][j];
                if(cell[i][j]=='@') x=i, y=j;
            }
        }
        dfs(x, y);
        printf("Case %d: %d\n", tc, cnt);
    }
}
