#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        double ab, ac, bc, ad, r, d;
        cin>>ab>>ac>>bc>>r;
        d=r/(r+1);
        ad=ab*sqrt(d);
        printf("Case %d: %f\n", tc, ad);
    }
}
