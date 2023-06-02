#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n, fact[21];
    cin>>t;
    fact[0]=1;
    for(int i=1; i<=20; i++) fact[i]=fact[i-1]*i;
    for(int tc=1; tc<=t; tc++){
        int x=20;
        stack<int>s;
        cin>>n;
        printf("Case %d: ", tc);
        while(x>=0){
            if(fact[x]<=n){
                n-=fact[x];
                s.push(x);
            }
            x--;
        }
        if(n==0){
            while(s.size()!=1) printf("%d!+", s.top()), s.pop();
            printf("%d!\n", s.top()), s.pop();
        }
        else puts("impossible");
    }
}
