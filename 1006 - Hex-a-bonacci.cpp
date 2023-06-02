#include<bits/stdc++.h>
#define mod 10000007
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        long long a[10001];
        for(int i=0; i<=5; i++) cin>>a[i];
        cin>>n;
        for(int k=6; k<=n; k++) a[k]=(a[k-1]+a[k-2]+a[k-3]+a[k-4]+a[k-5]+a[k-6])%mod;
        printf("Case %d: %lld\n", tc, a[n]%mod);
    }
}
