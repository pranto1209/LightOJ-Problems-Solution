#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        long long a, b, r1, r2;
        cin>>a>>b;
        r1=(a-1)/3*2;
        if((a-1)%3==2) r1++;
        r2=b/3*2;
        if(b%3==2) r2++;
        printf("Case %d: %lld\n", tc, r2-r1);
    }
}
