#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000005
vector<ll>primes, pr(maxn, 1);
void sieve()
{
    for(int i=3; i*i<=maxn; i+=2){
        if(pr[i>>1]){
            for(int j=i*i; j<=maxn; j+=i+i)
                pr[j>>1]=0;
        }
    }
    primes.push_back(2);
    for(int i=3; i<=maxn; i+=2) if(pr[i>>1]) primes.push_back(i);
}
int primeFactorize(ll n)
{
    int ans=1;
    for(int i=0; primes[i]*primes[i]<=n; i++){
        if(n%primes[i]==0){
            int cnt=1;
            while(n%primes[i]==0){
                n/=primes[i];
                cnt++;
            }
            ans*=cnt;
        }
    }
    if(n>1) ans*=2;
    return ans;
}
int main()
{
    sieve();
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        ll n;
        scanf("%lld", &n);
        int ans = primeFactorize(n)-1;
        printf("Case %d: %d\n", tc, ans);
    }
}
