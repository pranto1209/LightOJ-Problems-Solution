#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        double r1, r2, h, p, r, v;
        cin>>r1>>r2>>h>>p;
        r=r2+(r1-r2)*(p/h);
        v=1/3.00*pi*p*(r*r+r*r2+r2*r2);
        printf("Case %d: %f\n", tc, v);
    }
}
