#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        long long k, x, xsum=0, sum=0;
        cin>>k;
        for(int i=0; i<k; i++){
            cin>>x;
            sum+=x;
            xsum^=x;
        }
        printf("Case %d: ", tc);
        if(sum>k){
            if(xsum==0) puts("Bob");
            else puts("Alice");
        }
        else if(sum==k){
            if(sum&1) puts("Bob");
            else puts("Alice");
        }
    }
}
