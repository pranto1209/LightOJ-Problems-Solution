#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n;
        printf("Case %d: ", tc);
        bitset<32>b(n);
        if(b.count()%2) cout<<"odd\n";
        else cout<<"even\n";
    }
}
