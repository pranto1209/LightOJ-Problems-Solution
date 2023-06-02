#include<bits/stdc++.h>
using namespace std;
int pi[1000001];
void prefix_function(string p)
{
    int j=0;
    for(int i=1; i<p.size(); i++){
        while(j && p[i]!=p[j]) j=pi[j-1];
        if(p[i]==p[j]) j++;
        pi[i]=j;
    }
}
int kmp(string t, string p)
{
    prefix_function(p);
    int j=0;
    for(int i=0; i<t.size(); i++){
        while(j && t[i]!=p[j]) j=pi[j-1];
        if(t[i]==p[j]) j++;
    }
    return j;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        memset(pi, 0, sizeof pi);
        string t, p;
        cin>>t;
        p=t;
        reverse(p.begin(), p.end());
        int k=kmp(t, p);
        int ans=2*t.size()-k;
        printf("Case %d: %d\n", tc, ans);
    }
}
