#include<bits/stdc++.h>
using namespace std;
int ax, ay, bx, by, cx, cy, dx, dy;
double dis(double m)
{
    double px=ax+(bx-ax)*m;
    double py=ay+(by-ay)*m;
    double qx=cx+(dx-cx)*m;
    double qy=cy+(dy-cy)*m;
    double ret=sqrt((px-qx)*(px-qx)+(py-qy)*(py-qy));
    return ret;
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
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
