#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000005
#define mod 1000000007
vector<ll> primes, pr(maxn, 1);
vector<pair<ll, ll >>pfact;
ll powmod(ll a, ll b)
{
    ll res = 1;
    while(b > 0) {
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
void sieve(ll n)
{
    pr[1]=0;
    for(ll i=4; i<=n; i+=2) pr[i] = 0;
    for(ll i=3; i*i<=n; i+=2) {
        if(pr[i]) {
            for(ll j=i*i; j<=n; j+=i) pr[j] = 0;
        }
    }
    for(ll i=1; i<=n; i++) if(pr[i]) primes.push_back(i);
}
void primeFactorize(ll n)
{
    pfact.clear();
    for(ll i=0; primes[i]*primes[i]<=n; i++) {
        ll cnt = 0;
        if(n % primes[i] == 0) {
            while(n % primes[i] == 0) {
                n /= primes[i];
                cnt++;
            }
        }
        if(cnt) pfact.push_back({primes[i], cnt});
    }
    if(n > 1) pfact.push_back({n, 1});
}
int main()
{
    ios_base::sync_with_stdio(false);
    sieve(maxn);
    ll t;
    cin>>t;
    for(ll tc=1; tc<=t; tc++) {
        ll n, m, ans = 1, div = 1;
        cin>>n>>m;
        primeFactorize(n);
        // (p ^ (k+1) - 1 ) / (p - 1)
        for(ll i=0; i<pfact.size(); i++) {
            ll p = pfact[i].first;
            ll k = pfact[i].second * m;
            ll tmp = powmod(p, k+1);
            ans = ans * (tmp - 1) % mod;
            div = div * (p-1) % mod;
        }
        ans = (ans * powmod(div, mod-2) + mod) % mod;
        cout<<"Case "<<tc<<": "<<ans<<"\n";
    }
}