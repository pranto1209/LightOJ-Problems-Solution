#include<bits/stdc++.h>
using namespace std;
vector<int>g[101];
int tcost, tot, vis[101], cost[101][101];
void dfs(int u)
{
    vis[u]=1;
    for(int i=0; i<g[u].size(); i++){
        int v=g[u][i];
        if(!vis[v]){
            tcost+=cost[u][v];
            dfs(v);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, u, v, w;
        tot=0, tcost=0;
        memset(cost, 0, sizeof(cost));
        memset(vis, 0, sizeof(vis));
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>u>>v>>w;
            g[u].push_back(v);
            g[v].push_back(u);
            cost[u][v]=0;
            cost[v][u]=w;
            tot+=w;
        }
        dfs(1);
        tcost+=cost[g[1][1]][1];
        int r=min(tcost, tot-tcost);
        printf("Case %d: %d\n", tc, r);
        for(int i=0; i<=101; i++) g[i].clear();
    }
}
