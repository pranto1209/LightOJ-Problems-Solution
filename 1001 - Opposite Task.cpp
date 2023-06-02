#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<=10) cout<<"0 "<<n<<"\n";
        else cout<<n-10<<" "<<"10\n";
    }
}
