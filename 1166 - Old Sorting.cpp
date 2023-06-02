#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, x, cnt=0;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=n; i++)
            if(a[i]!=i)
                for(int j=i+1; j<=n; j++)
                    if(a[j]==i){
                        swap(a[i], a[j]);
                        cnt++;
                        break;
                    }
        printf("Case %d: %d\n", tc, cnt);
    }
}
