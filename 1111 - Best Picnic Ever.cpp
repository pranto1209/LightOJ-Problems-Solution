#include<bits/stdc++.h>
using namespace std;
#define maxn 1005
vector<int>g[maxn];
int p[101], vis[maxn], dis[maxn];
void dfs(int u)
{
    vis[u]=1;
    dis[u]++;
    for(int v: g[u]){
        if(!vis[v]) dfs(v);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int k, n, m, cnt=0;
        scanf("%d %d %d", &k, &n, &m);
        for(int i=1; i<=n; i++){
            dis[i]=0;
            g[i].clear();
        }
        for(int i=0; i<k; i++) scanf("%d", &p[i]);
        for(int i=0; i<m; i++){
            int u, v;
            scanf("%d %d", &u, &v);
            g[u].push_back(v);
        }
        for(int i=0; i<k; i++){
            for(int j=1; j<=n; j++) vis[j]=0;
            dfs(p[i]);
        }
        for(int i=1; i<=n; i++) if(dis[i]==k) cnt++;
        printf("Case %d: %d\n", tc, cnt);
    }
}
