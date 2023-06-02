#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define maxn 100005
vector<pair<int, pii>>pos;
map<int, int>m;
int a[maxn], st[4*maxn], ans[maxn];
void update(int v, int tl, int tr, int pos, int val)
{
    if(tl==tr) {st[v]=val; return;}
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
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        memset(a, 0, sizeof a);
        memset(st, 0, sizeof st);
        int n, q, cur=0;
        scanf("%d %d",&n, &q);
        for(int i=1; i<=n; i++) scanf("%d", &a[i]);
        for(int i=1; i<=q; i++){
            int l, r;
            scanf("%d %d", &l, &r);
            pos.push_back({r, {l, i}});
        }
        sort(pos.begin(), pos.end());
        for(int i=1; i<=n; i++){
            int key=a[i];
            if(m[key]) update(1, 1, n, m[key], 0);
            m[key]=i;
            update(1, 1, n, m[key], 1);
            while(cur<pos.size() && pos[cur].first==i){
                int l=pos[cur].second.first;
                int r=pos[cur].first;
                int idx=pos[cur].second.second;
                int res=query(1, 1, n, l, r);
                ans[idx]=res;
                cur++;
            }
        }
        printf("Case %d:\n", tc);
        for(int i=1; i<=q; i++) printf("%d\n", ans[i]);
        m.clear();
        pos.clear();
    }
}
