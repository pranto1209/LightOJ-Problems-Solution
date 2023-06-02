#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>m;
    string m1, b, m2;
    long long year1, date1, year2, date2;
    string s[20]= {"X", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for(int i=1; i<=12; i++){
        m[s[i]]=i;
    }
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>m1>>date1>>b>>year1;
        cin>>m2>>date2>>b>>year2;
        year1--;
        if(m[m1]>2) year1++;
        if(m[m2]<2 || (m[m2]==2 && date2<29)) year2--;
        long long leapyear=(year2/4-year2/100+year2/400)-(year1/4-year1/100+year1/400);
        printf("Case %d: %lld\n", tc, leapyear);
    }
}
