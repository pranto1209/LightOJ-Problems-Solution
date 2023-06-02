#include <bits/stdc++.h>
using namespace std;
int pw(int x, int p)
{
    int ans=0;
    while(x%p==0) x/=p, ans++;
    return ans;
}
int fact(int x, int p)
{
    int ans=0;
    while(x) ans+=x/p, x/=p;
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int n, r, p, q;
        scanf("%d %d %d %d", &n, &r, &p, &q);
        int p2 = fact(n, 2) - fact(r, 2) - fact(n-r, 2) + q*pw(p, 2);
        int p5 = fact(n, 5) - fact(r, 5) - fact(n-r, 5) + q*pw(p, 5);
        int ans = min(p2, p5);
        printf("Case %d: %d\n", tc, ans);
    }
}
