#include<bits/stdc++.h>
#define inf 1000000
using namespace std;
vector<pair<int, int>>g[1000];
int n, e, dis[1000];
void bellman_ford(int source)
{
    for(int i=0; i<=n; i++) dis[i]=inf;
	dis[source]=0;
    for(int k=1; k<=n; k++){
        for(int u=1; u<=n; u++){
            for(int i=0; i<g[u].size(); i++){
                int v=g[u][i].first;
                int w=g[u][i].second;
                if(dis[u]+w<dis[v] && dis[u]<inf){
                    dis[v]=dis[u]+w;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int u, v, w, nw, q, x, b[201];
        cin>>n;
        for(int i=1; i<=n; i++) cin>>b[i];
        cin>>e;
        for(int i=1; i<=e; i++){
            cin>>u>>v;
            w=b[v]-b[u];
            nw=w*w*w;
            g[u].push_back({v, nw});
        }
        bellman_ford(1);
        cin>>q;
        printf("Case %d:\n", tc);
        while(q--){
            cin>>x;
            if(dis[x]==inf || dis[x]<3) cout<<"?\n";
            else cout<<dis[x]<<"\n";
        }
        for(int i=0; i<=n; i++) g[i].clear();
    }
}
