#include<bits/stdc++.h>
#define mod 100000007
using namespace std;
int n, k, coin[60], use[60], dp[60][1100];
int coin_change(int i, int w)
{
    if(w<0) return 0;
    if(i>n){
        if(w==0) return 1;
        else return 0;
    }
    if(dp[i][w]!=-1) return dp[i][w];
    int ret1=0;
    for(int j=1; j<=use[i]; j++){
        ret1 += coin_change(i+1, w-(coin[i]*j));
    }
    int ret2 = coin_change(i+1, w);
    dp[i][w] = (ret1 + ret2)%mod;
    return dp[i][w];
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        scanf("%d %d", &n, &k);
        for(int i=0; i<=n; i++) for(int j=0; j<=k; j++) dp[i][j]=-1;
        for(int i=1; i<=n; i++) scanf("%d", &coin[i]);
        for(int i=1; i<=n; i++) scanf("%d", &use[i]);
        int ans = coin_change(1, k);
        printf("Case %d: %d\n", tc, ans);
    }
}
