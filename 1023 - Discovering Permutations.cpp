#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        string s="";
        cin>>n>>k;
        for(int i=0; i<n; i++) s+='A'+i;
        printf("Case %d:\n", tc);
        cout<<s<<"\n";
        k--;
        while(k--){
            if(next_permutation(s.begin(), s.end())) cout<<s<<"\n";
            else break;
        }
    }
}
