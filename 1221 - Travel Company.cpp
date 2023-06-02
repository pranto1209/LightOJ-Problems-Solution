#include<bits/stdc++.h>
#define inf 1000000
using namespace std;
int n, g[101][101];
void floyd_warshall()
{
    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(g[i][j]>g[i][k]+g[k][j])
                    g[i][j]=g[i][k]+g[k][j];
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int r, p, a, b, in, ex;
        cin>>n>>r>>p;
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                if(i==j) g[i][j]=0;
                else g[i][j]=inf;
            }
        }
        for(int i=0; i<r; i++){
            cin>>a>>b>>in>>ex;
            g[a][b]=p*ex-in;
        }
        floyd_warshall();
        bool neg_cycle=0;
        for(int i=0; i<n; i++) if(g[i][i]<0) neg_cycle=true;
        printf("Case %d: ", tc);
        if(neg_cycle) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
