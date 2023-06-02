#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, xsum=0;
        cin>>n;
        int w[n], b[n], a[n];
        for(int i=0; i<n; i++) cin>>w[i];
        for(int i=0; i<n; i++) cin>>b[i];
        for(int i=0; i<n; i++) a[i]=b[i]-w[i]-1;
        for(int i=0; i<n; i++) xsum^=a[i];
        printf("Case %d: ", tc);
        if(xsum==0) puts("black wins");
        else puts("white wins");
    }
}
