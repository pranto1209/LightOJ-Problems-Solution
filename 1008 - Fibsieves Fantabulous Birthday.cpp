#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        ll s, x, y, h, r;
        cin>>s;
        h=ceil(sqrt(s));
        r=s-(h-1)*(h-1);
        if(r>h) x=h, y=h*h-s+1;
        else x=r, y=h;
        if(h%2) swap(x, y);
        printf("Case %d: %lld %lld\n", tc, x, y);
    }
}
