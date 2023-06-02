#include<bits/stdc++.h>
using namespace std;
int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
void iff(int x)
{
    for(int i=0; i<25; i++){
        int y=x;
        if(p[i]<=y){
            if(i) printf(" * ");
            printf("%d ", p[i]);
            int cnt=0;
            while(y>=p[i]){
                cnt+=y/p[i];
                y/=p[i];
            }
            printf("(%d)", cnt);
        }
    }
    printf("\n");
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n;
        cin>>n;
        printf("Case %d: %d = ", tc, n);
        iff(n);
    }
}
