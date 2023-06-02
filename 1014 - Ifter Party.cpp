#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>divisor;
ll p, l;
void findDivisor(ll n)
{
    for(ll i=1; i*i<=n; i++){
        if(i*i==n && i>l) divisor.push_back(i);
        else if(n%i==0){
            if(i>l) divisor.push_back(i);
            if(n/i>l) divisor.push_back(n/i);
        }
    }
    sort(divisor.begin(), divisor.end());
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>p>>l;
        printf("Case %d:", tc);
        findDivisor(p-l);
        if(divisor.size()) for(int i=0; i<divisor.size(); i++) cout<<" "<<divisor[i];
        else cout<<" impossible";
        cout<<"\n";
        divisor.clear();
    }
}
