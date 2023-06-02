#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int n, a[maxn], st[maxn][20];
void build()
{
    for(int i=1; i<=n; i++) st[i][0]=a[i];
    for(int j=1; (1<<j)<=n; j++)
        for(int i=1; i+(1<<j)<=n+1; i++)
            st[i][j]=min(st[i][j-1], st[i+(1<<(j-1))][j-1]);
}
int query(int l, int r)
{
    int j=log2(r-l+1);
	int ans = min(st[l][j], st[r-(1<<j)+1][j]);
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int q;
        scanf("%d %d", &n, &q);
        for(int i=1; i<=n; i++) scanf("%d", &a[i]);
        build();
        printf("Case %d:\n", tc);
        while(q--){
            int l, r;
            scanf("%d %d", &l, &r);
            printf("%d\n", query(l, r));
        }
    }
}
