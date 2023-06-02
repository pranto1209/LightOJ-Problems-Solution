#include<bits/stdc++.h>
using namespace std;
vector<int>g[20001];
int z, o, vis[20001];
void bfs(int src)
{
    queue<int>q;
    vis[src]=1, o++;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0; i<g[u].size(); i++){
            int v=g[u][i];
            if(vis[v]==-1){
                if(vis[u]==1) vis[v]=0, z++;
                else vis[v]=1, o++;
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
        memset(vis, -1, sizeof(vis));
        set<int>s;
        int n, u, v, ans=0;
        cin>>n;
        while(n--){
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
            s.insert(u);
            s.insert(v);
        }
        printf("Case %d: ", tc);
        for(auto i: s){
            z=0, o=0;
            if(vis[i]==-1) bfs(i);
            ans+=max(z, o);
        }
        cout<<ans<<"\n";
        for(int i=0; i<=20001; i++) g[i].clear();
    }
}
