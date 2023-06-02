#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        double ox, oy, ax, ay, bx, by, r, r2, a, s;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        r=sqrt((ax-ox)*(ax-ox)+(ay-oy)*(ay-oy));
        r2=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        a=acos((2*r*r-r2*r2)/(2*r*r));
        s=r*a;
        printf("Case %d: %f\n", tc, s);
    }
}
