#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll lcm(ll a, ll b) {return (a/__gcd(a,b))*b;}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        ll a, b, L, l, g, r;
        cin>>a>>b>>L;
        printf("Case %d: ", tc);
        l=lcm(a, b);
        if(L%l!=0) cout<<"impossible\n";
        else{
            r=L/l;
            while(true){
                g=__gcd(l, r);
                if(g==1) break;
                r=r*g;
                l=l/g;
            }
            cout<<r<<"\n";
        }
    }
}
