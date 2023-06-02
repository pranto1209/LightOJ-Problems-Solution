#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int tc=1; tc<=t; tc++){
        string s, t;
        getline(cin, s);
        getline(cin, t);
        int a[26]={0}, b[26]={0};
        for(int i=0; i<s.size(); i++) if(isalpha(s[i])) a[tolower(s[i])-'a']++;
        for(int i=0; i<t.size(); i++) if(isalpha(t[i])) b[tolower(t[i])-'a']++;
        int f=1;
        for(int i=0; i<26; i++) if(a[i] != b[i]) {f=0; break;}
        printf("Case %d: ", tc);
        if(f) puts("Yes");
        else puts("No");
    }
}
