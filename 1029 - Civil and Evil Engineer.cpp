#include<bits/stdc++.h>
using namespace std;
vector<pair<int, pair<int, int>>>g;
int n, e, sum, parent[1000];
void initialize()
{
    for(int i=0; i<=n; i++) parent[i]=i;
}
int find_rep(int u)
{
    if(parent[u]==u) return u;
    return parent[u]=find_rep(parent[u]);
}
bool make_union(int u, int v)
{
    if(find_rep(u)!=find_rep(v)){
        parent[find_rep(v)]=find_rep(u);
        return true;
    }
    return false;
}
void kruskalMST()
{
    for(int i=0; i<e; i++){
        int flag=make_union(g[i].second.first, g[i].second.second);
        if(flag) sum+=g[i].first;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int u, v, w;
        cin>>n;
        while(true){
            cin>>u>>v>>w;
            if(u==0 && v==0 && w==0) break;
            g.push_back({w,{u,v}});
        }
        printf("Case %d: ", tc);
        e=g.size();
        sum=0;
        sort(g.begin(), g.end());
        initialize();
        kruskalMST();
        int x=sum;
        sum=0;
        reverse(g.begin(), g.end());
        initialize();
        kruskalMST();
        int y=sum;
        int p=x+y;
        if(p%2==0) cout<<p/2<<"\n";
        else cout<<p<<"/2\n";
        g.clear();
    }
}
