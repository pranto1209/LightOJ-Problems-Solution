#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        double x, y, c, h, h1, h2, lo, hi, mid;
        cin>>x>>y>>c;
        lo=0, hi=min(x, y);
        for(int cnt=0; cnt<100; cnt++){
            mid=(lo+hi)/2;
            h1=sqrt(x*x-mid*mid);
            h2=sqrt(y*y-mid*mid);
            h=1.0/((1.0/h1)+(1.0/h2));
            if(h>c) lo=mid;
            else hi=mid;
        }
        printf("Case %d: %.10f\n", tc, lo);
    }
}
