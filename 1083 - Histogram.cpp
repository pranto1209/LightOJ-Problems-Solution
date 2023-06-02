#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int n, r=0;
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        for(int i=0; i<n; i++){
            int cnt=1;
            for(int j=i+1; j<n; j++){
                if(a[i]>a[j]) break;
                cnt++;
            }
            for(int j=i-1; j>=0; j--){
                if(a[i]>a[j]) break;
                cnt++;
            }
            r=max(r, a[i]*cnt);
        }
        printf("Case %d: %d\n", tc, r);
    }
}
