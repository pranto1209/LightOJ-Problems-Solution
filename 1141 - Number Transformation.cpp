#include<bits/stdc++.h>
#define num 1005
using namespace std;
vector<int>primes;
int dis[num], vis[num];
void sieve()
{
    for(int i=2; i<=num; i++){
        int isPrime=1;
        for(int j=2; j*j<=i; j++) if(i%j==0) isPrime=0;
        if(isPrime) primes.push_back(i);
    }
}
int bfs(int s, int t)
{
    queue<int>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(u>=t) continue;
        for(int i=0; i<primes.size(); i++){
            if(u<primes[i]) break;
            if(u%primes[i]==0 && u!=primes[i]){
                int v=u+primes[i];
                if(!vis[v]){
                    dis[v]=dis[u]+1;
                    vis[v]=1;
                    q.push(v);
                }
            }
        }
        if(dis[t]) return dis[t];
    }
    return -1;
}
int main()
{
    sieve();
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int s, t;
        scanf("%d %d", &s, &t);
        printf("Case %d: ", tc);
        if(s==t) puts("0");
        else cout<<bfs(s, t)<<"\n";
        memset(dis, 0, sizeof(dis));
        memset(vis, 0, sizeof(vis));
    }
}
