#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, x, s=0;
        cin>>n;
        while(n--){
            cin>>x;
            if(x>=0) s+=x;
        }
        printf("Case %d: %d\n", tc, s);
    }
}
