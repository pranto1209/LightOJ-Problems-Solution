#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int m, n;
        cin>>m>>n;
        ll a[m];
        for(int i=0; i<m; i++){
            ll x, sum=0;
            for(int j=0; j<n; j++){
                cin>>x;
                sum+=x;
            }
            a[i]=sum;
        }
        ll xsum=0;
        for(int i=0; i<m; i++) xsum^=a[i];
        printf("Case %d: ", tc);
        if(xsum==0) puts("Bob");
        else puts("Alice");
    }
}
