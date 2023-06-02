#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, q, x, y;
        scanf("%d %d", &n, &q);
        int a[n];
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        printf("Case %d:\n", tc);
        while(q--){
            scanf("%d %d", &x, &y);
            int l=lower_bound(a, a+n, x)-a;
            int r=upper_bound(a, a+n, y)-a;
            printf("%d\n", r-l);
        }
    }
}
