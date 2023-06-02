#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        long long w, o, e;
        cin>>w;
        if(w%2){
            printf("Case %lld: Impossible\n", tc);
            continue;
        }
        o=w/2;
        e=2;
        while(o%2==0){
            o=o/2;
            e=e*2;
        }
        printf("Case %lld: %lld %lld\n", tc, o, e);
    }
}
