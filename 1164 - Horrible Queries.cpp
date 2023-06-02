#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 100005
ll st[4*maxn], lazy[4*maxn];
void push(int v, int tl, int tr)
{
    if(lazy[v]){
        st[v] += (tr-tl+1)*lazy[v];
        if(tl!=tr){
            lazy[2*v] += lazy[v];
            lazy[2*v+1] += lazy[v];
        }
        lazy[v] = 0;
    }
}
void update(int v, int tl, int tr, int l, int r, int val)
{
    push(v, tl, tr);
    if(l>tr || r<tl) return;
    if(l<=tl && tr<=r){
        st[v] += (tr-tl+1)*val;
        if(tl!=tr){
            lazy[2*v] += val;
            lazy[2*v+1] += val;
        }
        return;
    }
    int tm=(tl+tr)/2;
    update(2*v, tl, tm, l, r, val);
    update(2*v+1, tm+1, tr, l, r, val);
    st[v] = st[2*v] + st[2*v+1];
}
ll query(int v, int tl, int tr, int l, int r)
{
    push(v, tl ,tr);
    if(l>tr || r<tl) return 0;
    if(l<=tl && tr<=r) return st[v];
    int tm=(tl+tr)/2;
    return query(2*v, tl, tm, l, r) + query(2*v+1, tm+1, tr, l, r);
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        memset(st, 0, sizeof st);
        memset(lazy, 0, sizeof lazy);
        int n, q, x, y;
        scanf("%d %d", &n, &q);
        printf("Case %d:\n", tc);
        while(q--){
            int f;
            scanf("%d", &f);
            if(f==0){
                ll v;
                scanf("%d %d %lld", &x, &y, &v);
                update(1, 1, n, x+1, y+1, v);
            }
            if(f==1){
                ll x, y;
                scanf("%d %d", &x, &y);
                printf("%lld\n", query(1, 1, n, x+1, y+1));
            }
        }
    }
}
