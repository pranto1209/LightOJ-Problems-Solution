#include<bits/stdc++.h>
using namespace std;
int ax, ay, az, bx, by, bz, px, py, pz;
double dis(double m)
{
    double x=ax+(bx-ax)*m;
    double y=ay+(by-ay)*m;
    double z=az+(bz-az)*m;
    double ret=sqrt((px-x)*(px-x)+(py-y)*(py-y)+(pz-z)*(pz-z));
    return ret;
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>ax>>ay>>az>>bx>>by>>bz>>px>>py>>pz;
        double l=0, r=1, m1, m2, f1, f2;
        for(int cnt=0; cnt<100; cnt++){
            m1=l+(r-l)/3;
            m2=r-(r-l)/3;
            f1=dis(m1);
            f2=dis(m2);
            if(f1>f2) l=m1;
            else r=m2;
        }
        double ans=dis(l);
        printf("Case %d: %.10f\n", tc, ans);
    }
}
