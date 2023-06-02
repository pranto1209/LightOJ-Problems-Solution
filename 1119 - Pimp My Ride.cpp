#include<bits/stdc++.h>
using namespace std;
#define maxn 15
int n, w[maxn][maxn], dp[1<<maxn];
int turnOn(int x, int pos){
    return x | (1<<pos);
}
bool isOn(int x, int pos){
    return x & (1<<pos);
}
int call(int mask)
{
    if(mask==(1<<n)-1) return 0;
    if(dp[mask]!=-1) return dp[mask];
    int ret=1<<30;
    for(int i=0; i<n; i++){
        if(isOn(mask, i)==0){
            int p = w[i][i];
            for(int j=0; j<n; j++){
                if(i!=j && isOn(mask, j)!=0){
                    p += w[i][j];
                }
            }
            ret = min(ret, p + call(turnOn(mask, i)));
        }
    }
    return dp[mask] = ret;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        memset(dp,-1, sizeof(dp));
        scanf("%d", &n);
        for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &w[i][j]);
        int ans = call(0);
        printf("Case %d: %d\n", tc, ans);
    }
}
