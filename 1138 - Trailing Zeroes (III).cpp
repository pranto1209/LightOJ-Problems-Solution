#include<bits/stdc++.h>
using namespace std;
int calc(int x)
{
    int ret=0;
    while(x){
        ret+=x/5;
        x/=5;
    }
    return ret;
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int q, l=0, r=1e9, mid, ans=0;
        cin>>q;
        while(l<=r){
            mid=(l+r)/2;
            int ret=calc(mid);
            if(ret==q) ans=mid, r=mid-1;
            else if(ret<q) l=mid+1;
            else r=mid-1;
        }
        if(ans) printf("Case %d: %d\n", tc, ans);
        else printf("Case %d: impossible\n", tc);
    }
}
