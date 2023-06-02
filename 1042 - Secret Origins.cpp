#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, ans=0, p=1;
        cin>>n;
        string s="";
        while(n){
            if(n&1) s+='1';
            else s+='0';
            n/=2;
        }
        s+='0';
        reverse(s.begin(), s.end());
        next_permutation(s.begin(), s.end());
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='1') ans+=p;
            p*=2;
        }
        printf("Case %d: %d\n", tc, ans);
    }
}
