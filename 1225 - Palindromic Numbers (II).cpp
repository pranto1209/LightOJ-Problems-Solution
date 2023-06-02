#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        string s, t;
        cin>>s;
        printf("Case %d: ", tc);
        t=s;
        reverse(t.begin(), t.end());
        if(s==t) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
