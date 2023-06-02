#include<bits/stdc++.h>
using namespace std;
#define maxn 5000001
unsigned long long phi[maxn];
int mark[maxn];
void sieve_phi()
{
    for(int i=1; i<=maxn; i++) phi[i]=i;
    for(int i=2; i<=maxn; i++)
        if(phi[i]==i)
            for(int j=i; j<=maxn; j+=i){
                phi[j]-=phi[j]/i;
            }
    for(int i=2; i<=maxn; i++) phi[i]=phi[i-1]+phi[i]*phi[i];
}
int main()
{
    sieve_phi();
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int a, b;
        scanf("%d %d", &a, &b);
        unsigned long long sum=phi[b]-phi[a-1];
        printf("Case %d: %llu\n", tc, sum);
    }
}
