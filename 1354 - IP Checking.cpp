#include<bits/stdc++.h>
using namespace std;
int DectoBin(int n)
{
    int mul=1, res=0;
    while(n>0){
        res+=n%2*mul;
        mul*=10;
        n/=2;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int da, db, dc, dd, ba, bb, bc, bd;
        scanf("%d.%d.%d.%d", &da, &db, &dc, &dd);
        scanf("%d.%d.%d.%d", &ba, &bb, &bc, &bd);
        printf("Case %d: ", tc);
        if(DectoBin(da)==ba && DectoBin(db)==bb && DectoBin(dc)==bc && DectoBin(dd)==bd) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
