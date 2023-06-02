#include<bits/stdc++.h>
using namespace std;
double dp[1000001];
int main()
{
    int t, n, b;
    for(int i=1; i<=1000000; i++) dp[i]=dp[i-1]+log(i);
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n>>b;
        long long cnt=dp[n]/log(b)+1;
        printf("Case %d: %lld\n", tc, cnt);
    }
}
