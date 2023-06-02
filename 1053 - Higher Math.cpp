#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        printf("Case %d: ", tc);
        sort(a, a+3);
        if(a[2]*a[2]==(a[1]*a[1])+(a[0]*a[0])) cout<<"yes\n";
        else cout<<"no\n";
    }
}
