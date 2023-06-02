#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int n, q, x;
        scanf("%d %d", &n, &q);
        vector<int>a(n), b(n);
        for(int i=0; i<n; i++) scanf("%d %d", &a[i], &b[i]);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        printf("Case %d:\n", tc);
        while(q--){
            scanf("%d", &x);
            int ub=upper_bound(a.begin(), a.end(), x)-a.begin();
            int lb=lower_bound(b.begin(), b.end(), x)-b.begin();
            printf("%d\n", ub-lb);
        }
    }
}

