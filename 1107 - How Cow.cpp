#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int x1, y1, x2, y2, m, x, y;
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        printf("Case %d:\n", tc);
        while(m--){
            cin>>x>>y;
            if(x>x1 && x<x2 && y>y1 && y<y2) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}
