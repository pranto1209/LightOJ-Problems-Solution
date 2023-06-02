#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, ans=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='.') ans++, i+=2;
        }
        printf("Case %d: %d\n", tc, ans);
    }
}
