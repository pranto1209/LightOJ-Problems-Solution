#include<bits/stdc++.h>
#define inf 1000000
#define pii pair<int, int>
using namespace std;
vector<pii>g[1000];
int n, m, dis[1000];
void dijkstra(int s)
{
    priority_queue<pii, vector<pii>, greater<pii>>q;
    for(int i=0; i<n; i++) dis[i]=inf;
    dis[s]=0;
    q.push({0,s});
    while(!q.empty()){
        int u=q.top().second;
        q.pop();
        for(int i=0; i<g[u].size(); i++){
            int v=g[u][i].first;
            int w=max(dis[u], g[u][i].second);
            if(w<dis[v]){
                dis[v]=w;
                q.push({dis[v],v});
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int u, v, w, t;
        cin>>n>>m;
        for(int i=0; i<m; i++){
            cin>>u>>v>>w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        cin>>t;
        dijkstra(t);
        printf("Case %d:\n", tc);
        for(int i=0; i<n; i++){
            if(dis[i]==inf) cout<<"Impossible\n";
            else cout<<dis[i]<<endl;
        }
        for(int i=0; i<n; i++) g[i].clear();
    }
}
