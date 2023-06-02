#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int a[maxn], st[4*maxn];
void build(int v, int tl, int tr)
{
    if(tl==tr) {st[v]=a[tl]; return;}
    int tm=(tl+tr)/2;
    build(2*v, tl, tm);
    build(2*v+1, tm+1, tr);
    st[v] = min(st[2*v], st[2*v+1]);
}
int query(int v, int tl, int tr, int l, int r)
{
    if(l>tr || r<tl) return INT_MAX;
    if(l<=tl && tr<=r) return st[v];
    int tm=(tl+tr)/2;
    return min(query(2*v, tl, tm, l, r), query(2*v+1, tm+1, tr, l, r));
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int n, q;
        scanf("%d %d", &n, &q);
        for(int i=1; i<=n; i++) scanf("%d", &a[i]);
        build(1, 1, n);
        printf("Case %d:\n", tc);
        while(q--){
            int l, r;
            scanf("%d %d", &l, &r);
            printf("%d\n", query(1, 1, n, l, r));
        }
    }
}
