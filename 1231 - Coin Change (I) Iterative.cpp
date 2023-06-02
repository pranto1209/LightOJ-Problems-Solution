#include<bits/stdc++.h>
#define mod 100000007
using namespace std;
int coin[60], use[60], dp[60][1100];
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        memset(dp, 0, sizeof(dp));
        int n, k;
        scanf("%d %d", &n, &k);
        for(int i=1; i<=n; i++) scanf("%d", &coin[i]);
        for(int i=1; i<=n; i++) scanf("%d", &use[i]);
        dp[0][0]=1;
        for(int i=1; i<=n; i++)
            for(int j=0; j<=k; j++)
                for(int l=0; l<=use[i]; l++)
                    if(j-(coin[i]*l)>=0)
                        dp[i][j] = (dp[i][j] + dp[i-1][j-(coin[i]*l)])%mod;
        printf("Case %d: %d\n", tc, dp[n][k]);
    }
}
