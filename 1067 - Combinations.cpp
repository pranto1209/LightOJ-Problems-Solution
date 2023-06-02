#include<bits/stdc++.h>
#define ll long long
#define mod 1000003
using namespace std;
ll fac[1000001];
ll big_mod(ll n, ll pow)
{
    if(pow==0) return 1;
    if(pow%2==0){
        ll ret=big_mod(n, pow/2);
        return ((ret%mod)*(ret%mod))%mod;
    }
    else return ((n%mod)*(big_mod(n, pow-1)%mod))%mod;
}
int main()
{
    int t, n, r;
    fac[0]=1;
    for(int i=1; i<=1000000; i++) fac[i]=(fac[i-1]*i)%mod;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n>>r;
        ll u=fac[n];
        ll d=(fac[r]*fac[n-r])%mod;
        ll ans=(u*big_mod(d, mod-2))%mod;
        printf("Case %d: %lld\n", tc, ans);
    }
}
