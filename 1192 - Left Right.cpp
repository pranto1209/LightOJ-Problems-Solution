#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        long long k, x, y, xsum=0;
        cin>>k;
        for(int i=0; i<k; i++){
            cin>>x>>y;
            xsum^=y-x-1;
        }
        printf("Case %d: ", tc);
        if(xsum==0) puts("Bob");
        else puts("Alice");
    }
}
