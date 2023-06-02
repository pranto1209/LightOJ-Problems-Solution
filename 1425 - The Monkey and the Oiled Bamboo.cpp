#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int n, dif, mx=0;
        scanf("%d", &n);
        vector<int>a(n+1), d;
        for(int i=1; i<=n; i++){
            scanf("%d", &a[i]);
            dif=a[i]-a[i-1];
            d.push_back(dif);
            if(dif>mx) mx=dif;
        }
        int k=mx, ans=mx;
        for(int i=0; i<n; i++){
            if(d[i]==k) k--;
            else if(d[i]>k) ans++, k=ans;
        }
        printf("Case %d: %d\n", tc, ans);
    }
}
