#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int a[maxn], st[4*maxn], lazy[4*maxn];
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
void build(int v, int tl, int tr)
{
    if(tl==tr) {st[v]=a[tl]; return;}
    int tm=(tl+tr)/2;
    build(2*v, tl, tm);
    build(2*v+1, tm+1, tr);
    st[v] = st[2*v] + st[2*v+1];
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
int query(int v, int tl, int tr, int l, int r)
{
    push(v, tl ,tr);
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
        memset(st, 0, sizeof st);
        memset(lazy, 0, sizeof lazy);
        int n, q, x, y;
        string s;
        cin>>s>>q;
        printf("Case %d:\n", tc);
        n=s.size();
        for(int i=0; i<n; i++) a[i+1]=(s[i]-'0');
        build(1, 1, n);
        while(q--){
            char ch;
            cin>>ch;
            if(ch=='I'){
                cin>>x>>y;
                update(1, 1, n, x, y, 1);
            }
            if(ch=='Q'){
                cin>>x;
                printf("%d\n", query(1, 1, n, x, x)%2);
            }
        }
    }
}
