#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        string a;
        long long b, l, r=0;
        cin>>a>>b;
        l=a.size();
        for(int i=0; i<l; i++){
            if(a[i]!='-') r=(r*10+(a[i]-'0'))%b;
        }
        printf("Case %d: ", tc);
        if(r==0) cout<<"divisible\n";
        else cout<<"not divisible\n";
    }
}
