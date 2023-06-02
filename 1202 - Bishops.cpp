#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int r1, c1, r2, c2;
        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        printf("Case %d: ", tc);
        if(abs(r1-c1)%2 != abs(r2-c2)%2) puts("impossible");
        else{
            if(abs(r1-r2)==abs(c1-c2)) puts("1");
            else puts("2");
        }
    }
}
