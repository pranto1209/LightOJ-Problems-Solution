#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, cnt=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a, a+n);
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int idx=lower_bound(a, a+n, a[i]+a[j])-a-1;
                cnt+=idx-j;
            }
        }
        printf("Case %d: %d\n", tc, cnt);
    }
}
