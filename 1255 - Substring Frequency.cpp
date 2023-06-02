#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        string t, p;
        cin>>t>>p;
        int ts=t.size(), ps=p.size();
        int cnt=0;
        for(int i=0; i<=ts-ps; i++){
            if(t.compare(i, ps, p)==0) cnt++;
        }
        printf("Case %d: %d\n", tc, cnt);
    }
}
