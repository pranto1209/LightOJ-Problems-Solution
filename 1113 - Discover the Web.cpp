#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        string w[100], s;
        int now=0, his=0;
        w[0]="http://www.lightoj.com/";
        printf("Case %d:\n", tc);
        while(true){
            cin>>s;
            if(s=="VISIT"){
                now++;
                his=now;
                cin>>w[now];
                cout<<w[now]<<"\n";
            }
            else if(s=="BACK"){
                if(now) now--, cout<<w[now]<<"\n";
                else puts("Ignored");
            }
            else if(s=="FORWARD"){
                if(now<his) now++, cout<<w[now]<<"\n";
                else puts("Ignored");
            }
            else if(s=="QUIT") break;
        }
    }
}
