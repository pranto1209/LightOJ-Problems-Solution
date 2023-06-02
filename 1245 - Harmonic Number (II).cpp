#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        long long sum=0;
        int n;
        scanf("%d", &n);
        int m=sqrt(n);
        for(int i=1; i<=m; i++) sum+=n/i;
        sum*=2;
        sum-=m*m;
        printf("Case %d: %lld\n", tc, sum);
    }
}
