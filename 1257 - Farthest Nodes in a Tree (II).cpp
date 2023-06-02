#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>>g[30001];
int fdis[30001], sdis[30001];
void bfs(int s, int *dis)
{
    queue<int>q;
	dis[s]=0;
	q.push(s);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int i=0; i<g[u].size(); i++){
			int v=g[u][i].first;
			int w=g[u][i].second;
			if(dis[v]==-1){
				dis[v]=dis[u]+w;
				q.push(v);
			}
        }
	}
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, u, v, w;
        cin>>n;
        for(int i=1; i<n; i++){
            cin>>u>>v>>w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        printf("Case %d:\n", tc);
        memset(fdis, -1, sizeof(fdis));
        bfs(0, fdis);
        int mxdis=0, node;
        for(int i=0; i<n; i++){
            if(fdis[i]>mxdis){
                mxdis=fdis[i];
                node=i;
            }
        }
        memset(fdis, -1, sizeof(fdis));
        bfs(node, fdis);
        mxdis=0;
        for(int i=0; i<n; i++){
            if(fdis[i]>mxdis){
                mxdis=fdis[i];
                node=i;
            }
        }
        memset(sdis, -1, sizeof(sdis));
        bfs(node, sdis);
        for(int i=0; i<n; i++) printf("%d\n", max(fdis[i], sdis[i]));
        for(int i=0; i<n; i++) g[i].clear();
    }
}
