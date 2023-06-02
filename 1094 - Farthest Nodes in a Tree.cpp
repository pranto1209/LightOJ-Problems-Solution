#include<bits/stdc++.h>
#define inf 1000000000
#define pii pair<int, int>
using namespace std;
vector<pii>g[30001];
int n, dis[30001];
void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>>q;
	for(int i=0; i<=n; i++) dis[i]=inf;
	dis[source]=0;
	q.push({0,source});
	while(!q.empty()){
		int u=q.top().second;
		q.pop();
		for(int i=0; i<g[u].size(); i++){
			int v=g[u][i].first;
			int w=g[u][i].second;
			if(dis[u]+w<dis[v]){
				dis[v]=dis[u]+w;
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
        memset(dis, 0, sizeof(dis));
        int u, v, w;
        cin>>n;
        for(int i=1; i<=n-1; i++){
            cin>>u>>v>>w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        dijkstra(0);
        int maxdis=0, node1;
        for(int i=0; i<n; i++){
            if(dis[i]>maxdis){
                maxdis=dis[i];
                node1=i;
            }
        }
        memset(dis, 0, sizeof(dis));
        dijkstra(node1);
        int diameter=0, node2;
        for(int i=0; i<n; i++){
            if(dis[i]>diameter){
                diameter=dis[i];
                node2=i;
            }
        }
        printf("Case %d: %d\n", tc, diameter);
        for(int i=0; i<=n; i++) g[i].clear();
    }
}
