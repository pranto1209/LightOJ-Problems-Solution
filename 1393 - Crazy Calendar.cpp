#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int r, c, x, xsum=0;
        scanf("%d %d", &r, &c);
        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                scanf("%d", &x);
                int dis=r-i+c-j;
                if(dis&1) xsum^=x;
            }
        }
        printf("Case %d: ", tc);
        if(xsum==0) puts("lose");
        else puts("win");
    }
}
