#include<bits/stdc++.h>
using namespace std;
int a[1001], divisor[1001];
bool check(int x, int y)
{
    if(divisor[x]==divisor[y]) return x>y;
    return divisor[x]<divisor[y];
}
void ordering()
{
    for(int i=1; i<=1000; i++){
        int cnt=0;
        for(int j=1; j*j<=i; j++){
            if(j*j==i) cnt++;
            else if(i%j==0) cnt+=2;
        }
        divisor[i]=cnt;
    }
    for(int i=0; i<1000; i++) a[i]=i+1;
    sort(a, a+1000, check);
}
int main()
{
    ordering();
    int t, n;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n;
        printf("Case %d: %d\n", tc, a[n-1]);
    }
}
