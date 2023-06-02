#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        string s;
        int n, m, x, y;
        cin>>n>>m;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        while(m--){
            cin>>s;
            if(s=="S"){
                cin>>x;
                for(int i=0; i<n; i++) a[i]+=x;
            }
            else if(s=="M"){
                cin>>x;
                for(int i=0; i<n; i++) a[i]*=x;
            }
            else if(s=="D"){
                cin>>x;
                for(int i=0; i<n; i++) a[i]/=x;
            }
            else if(s=="R"){
                reverse(a, a+n);
            }
            else if(s=="P"){
                cin>>x>>y;
                swap(a[x], a[y]);
            }
        }
        printf("Case %d:\n%d", tc, a[0]);
        for(int i=1; i<n; i++) cout<<" "<<a[i];
        cout<<"\n";
    }
}
