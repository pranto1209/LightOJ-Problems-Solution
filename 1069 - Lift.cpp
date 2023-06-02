#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int m, l;
        cin>>m>>l;
        int d=abs(m-l);
        d+=(m-0);
        d*=4;
        d+=19;
        printf("Case %d: %d\n", tc, d);
    }
}
