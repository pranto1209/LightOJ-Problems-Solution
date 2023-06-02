#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int m, n, b, r;
        cin>>m>>n;
        b=m*n;
        if(m==1 || n==1) r=b;
        else if(m==2 || n==2){
            int mx=max(m, n);
            if(mx%4==1 || mx%4==3) mx++;
            else if(mx%4==2) mx+=2;
            else mx=b/2;
            r=mx;
        }
        else if(b%2) r=(b/2)+1;
        else r=b/2;
        printf("Case %d: %d\n", tc, r);
    }
}
