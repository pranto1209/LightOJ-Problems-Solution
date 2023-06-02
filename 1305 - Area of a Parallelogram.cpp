#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int ax, ay, bx, by, cx, cy, dx, dy, area;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=cx+ax-bx;
        dy=cy+ay-by;
        area=.5*abs(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
        printf("Case %d: %d %d %d\n", tc, dx, dy, area);
    }
}
