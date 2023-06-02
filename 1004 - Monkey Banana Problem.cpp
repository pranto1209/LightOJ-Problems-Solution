#include<bits/stdc++.h>
using namespace std;
#define maxn 205
int n, a[maxn][maxn], dp[maxn][maxn];
int call(int i, int j)
{
    if(i>=0 && i<2*n-1 && j>=0 && j<n){
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j] = max(call(i+1, j) + a[i][j], call(i+1, j+1) + a[i][j]);
        return dp[i][j];
    }
    else return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        scanf("%d", &n);
        for(int i=0; i<2*n-1; i++) for(int j=0; j<n; j++) a[i][j]=0, dp[i][j]=-1;
        for(int i=0; i<n; i++) for(int j=0; j<=i; j++) scanf("%d", &a[i][j]);
        for(int i=n; i<2*n-1; i++) for(int j=i-n+1; j<n; j++) scanf("%d", &a[i][j]);
        int ans = call(0, 0);
        printf("Case %d: %d\n", tc, ans);
    }
}
