#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        ll n, m, r;
        cin>>n>>m;
        r=(n*m)/2;
        printf("Case %d: %lld\n", tc, r);
    }
}
