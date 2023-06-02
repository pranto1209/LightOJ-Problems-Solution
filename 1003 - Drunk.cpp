#include<bits/stdc++.h>
#define maxr 10001
using namespace std;
vector<int>g[maxr];
map<string, int>mp;
queue<int>q;
int cnt, indegree[maxr];
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        string a, b;
        int m, cnt=1, f=1;
        cin>>m;
        while(m--){
            cin>>a>>b;
            if(mp[a]==0) mp[a]=cnt++;
            if(mp[b]==0) mp[b]=cnt++;
            int u=mp[a];
            int v=mp[b];
            g[u].push_back(v);
            indegree[v]++;
        }
        for(int i=1; i<cnt; i++) if(indegree[i]==0) q.push(i);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int i=0; i<g[u].size(); i++){
                int v=g[u][i];
                indegree[v]--;
                if(indegree[v]==0) q.push(v);
            }
        }
        for(int i=1; i<cnt; i++) if(indegree[i]!=0) {f=0; break;}
        printf("Case %d: ", tc);
        if(f) puts("Yes");
        else puts("No");
        memset(indegree, 0, sizeof(indegree));
        for(int i=0; i<=cnt; i++) g[i].clear();
        mp.clear();
    }
}
