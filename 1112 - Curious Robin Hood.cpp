#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int a[maxn], st[4*maxn];
void build(int v, int tl, int tr)
{
    if(tl==tr) {st[v] = a[tl]; return;}
    int tm=(tl+tr)/2;
    build(2*v, tl, tm);
    build(2*v+1, tm+1, tr);
    st[v] = st[2*v] + st[2*v+1];
}
void update(int v, int tl, int tr, int pos, int val)
{
    if(tl==tr) {st[v] += val; return;}
    int tm=(tl+tr)/2;
    if(pos<=tm) update(2*v, tl, tm, pos, val);
    else update(2*v+1, tm+1, tr, pos, val);
    st[v] = st[2*v] + st[2*v+1];
}
int query(int v, int tl, int tr, int l, int r)
{
    if(l>tr || r<tl) return 0;
    if(l<=tl && tr<=r) return st[v];
    int tm=(tl+tr)/2;
    return query(2*v, tl, tm, l, r) + query(2*v+1, tm+1, tr, l, r);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, q, p, v, x, y;
        cin>>n>>q;
        for(int i=1; i<=n; i++) cin>>a[i];
        build(1, 1, n);
        printf("Case %d:\n", tc);
        while(q--){
            cin>>p;
            if(p==1){
                cin>>x;
                int q=query(1, 1, n, x+1, x+1);
                printf("%d\n", q);
                update(1, 1, n, x+1, -q);
            }
            if(p==2){
                cin>>x>>v;
                update(1, 1, n, x+1, v);
            }
            if(p==3){
                cin>>x>>y;
                printf("%d\n", query(1, 1, n, x+1, y+1));
            }
        }
    }
}
