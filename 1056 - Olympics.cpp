#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int a, b;
        scanf("%d : %d", &a, &b);
        double r=sqrt(b*b+a*a)/2.0;
        double ang=acos((r*r+r*r-b*b)/(2.0*r*r));
        double s=r*ang;
        double x=400.0/(2.0*a+2.0*s);
        printf("Case %d: %.10f %.10f\n", tc, a*x, b*x);
    }
}
