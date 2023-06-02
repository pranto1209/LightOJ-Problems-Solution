#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, f=1;
        cin>>n;
        string s[n];
        for(int i=0; i<n; i++) cin>>s[i];
        sort(s, s+n);
        for(int i=0; i<n-1; i++){
            string a = s[i], b = s[i+1];
            int idx = b.find(a);
            if(idx>=0) {f=0; break;}
        }
        printf("Case %d: ", tc);
        if(f) puts("YES");
        else puts("NO");
    }
}
