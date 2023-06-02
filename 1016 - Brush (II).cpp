#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int n, w, cnt=1;
        scanf("%d %d", &n, &w);
        int x[n], y[n];
        for(int i=0; i<n; i++) scanf("%d %d", &x[i], &y[i]);
        sort(y, y+n);
        int d=y[0]+w;
        for(int i=0; i<n; i++){
            if(y[i]>d) cnt++, d=y[i]+w;
        }
        printf("Case %d: %d\n", tc, cnt);
    }
}
