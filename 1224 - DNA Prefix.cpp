#include<bits/stdc++.h>
using namespace std;
#define maxn 1000000
int node, nxt[maxn][4], tot[maxn];

int add(string s)
{
    int now=0, cnt=0;
    for(int i=0; i<s.size(); i++){
        int id;
        if(s[i]=='A') id=0;
        else if(s[i]=='C') id=1;
        else if(s[i]=='G') id=2;
        else id=3;
        if(nxt[now][id]==0) nxt[now][id] = ++node;
        now=nxt[now][id];
        tot[now]++;
        cnt = max(cnt, tot[now]*(i+1));
    }
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n, ans=0;
        cin>>n;
        string s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
            ans = max(ans, add(s[i]));
        }
        printf("Case %d: %d\n", tc, ans);
        for(int i=0; i<=node; i++){
            tot[i]=0;
            for(int j=0; j<4; j++) nxt[i][j]=0;
        }
        node=0;
    }
}
