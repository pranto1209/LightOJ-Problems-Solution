#include<bits/stdc++.h>
using namespace std;
#define maxn 1000000
#define eulergamma 0.57721566490153286060651209
double h[maxn];
void harmonic()
{
    h[1] = 1.0;
    for(int i=2; i<=maxn; i++){
        h[i] = h[i-1] + (1.0/i);
    }
}

int main()
{
    harmonic();
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        double ans;
        int n;
        cin>>n;
        if(n<=maxn) ans=h[n];
        else ans=log(n+0.5)+eulergamma;
        printf("Case %d: %.10f\n", tc, ans);
    }
}
