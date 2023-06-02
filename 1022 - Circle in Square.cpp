#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        double r;
        cin>>r;
        double ac=pi*r*r;
        double as=4*r*r;
        printf("Case %d: %.2f\n", tc, as-ac);
    }
}
