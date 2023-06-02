#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int n, a[maxn], lt[maxn], rt[maxn];
void update(int idx, int val)
{
    for(int i=idx; i<=n; i+=(i&-i)) lt[i] = min(lt[i], val);
    for(int i=idx; i>0; i-=(i&-i)) rt[i] = min(rt[i], val);
    a[idx]=val;
}
int query(int l, int r)
{
    int i, res=INT_MAX;
    for(i=r; i-(i&-i)>=l; i-=(i&-i)) res = min(res, lt[i]);
    for(i=l; i+(i&-i)<=r; i+=(i&-i)) res = min(res, rt[i]);
    res = min(res,a[i]);
    return res;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
    	memset(lt, INT_MAX, sizeof lt);
    	memset(rt, INT_MAX, sizeof rt);
        int q;
        scanf("%d %d", &n, &q);
        for(int i=1; i<=n; i++){
            scanf("%d", &a[i]);
            update(i, a[i]);
        }
        printf("Case %d:\n", tc);
        while(q--){
            int l, r;
            scanf("%d %d", &l, &r);
            printf("%d\n", query(l, r));
        }
    }
}
