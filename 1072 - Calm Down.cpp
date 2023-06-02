#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        double R, n, r;
        cin>>R>>n;
        r=(R*sin(pi/n))/(1+sin(pi/n));
        printf("Case %d: %.10f\n", tc, r);
    }
}
