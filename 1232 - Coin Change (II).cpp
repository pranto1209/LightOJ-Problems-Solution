#include<bits/stdc++.h>
#define mod 100000007
using namespace std;
int coin[110], dp[11000];
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        memset(dp,0,sizeof(dp));
        int n, k;
        scanf("%d %d", &n, &k);
        for(int i=1; i<=n; i++) scanf("%d", &coin[i]);
        dp[0]=1;
        for(int i=1; i<=n; i++)
            for(int j=0; j<=k; j++)
                if(j-coin[i]>=0)
                    dp[j] = (dp[j] + dp[j-coin[i]])%mod;
        printf("Case %d: %d\n", tc, dp[k]);
    }
}
