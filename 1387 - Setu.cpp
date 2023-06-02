#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        vector<int>v;
        int n, x, sum=0;
        string s;
        cin>>n;
        while(n--){
            cin>>s;
            if(s=="donate") cin>>x, sum+=x;
            if(s=="report") v.push_back(sum);
        }
        printf("Case %d:\n", tc);
        for(int i=0; i<v.size(); i++) cout<<v[i]<<endl;
    }
}
