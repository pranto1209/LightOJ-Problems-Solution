#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        ll ax, ay, bx, by;
        cin>>ax>>ay>>bx>>by;
        ll x=abs(bx-ax), y=abs(by-ay);
        ll ans=__gcd(x, y);
        printf("Case %d: %lld\n", tc, ans+1);
    }
}
