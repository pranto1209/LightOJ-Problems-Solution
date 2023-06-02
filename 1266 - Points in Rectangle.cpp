#include<bits/stdc++.h>
using namespace std;
#define maxn 1005
int bit[maxn][maxn], vis[maxn][maxn];
void update(int x, int y, int val)
{
    for(int i=x; i<=maxn; i+=(i&-i))
		for(int j=y; j<=maxn; j+=(j&-j))
			bit[i][j]+=val;
}
int query(int x, int y)
{
    int ret=0;
	for(int i=x; i>0; i-=(i&-i))
		for(int j=y; j>0; j-=(j&-j))
			ret+=bit[i][j];
    return ret;
}
int query(int x1, int y1, int x2, int y2)
{
    return query(x2, y2) - query(x1-1, y2) - query(x2, y1-1) + query(x1-1, y1-1);
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        memset(bit, 0, sizeof bit);
        memset(vis, 0, sizeof vis);
        int q, f, x, y, x1, y1, x2, y2;
        scanf("%d", &q);
        printf("Case %d:\n", tc);
        while(q--){
            scanf("%d", &f);
            if(f==0){
                scanf("%d %d", &x, &y);
                x++, y++;
                if(vis[x][y]) continue;
                vis[x][y]=1;
                update(x, y, 1);
            }
            else{
                scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
                printf("%d\n", query(x1+1, y1+1, x2+1, y2+1));

            }
        }
    }
}
