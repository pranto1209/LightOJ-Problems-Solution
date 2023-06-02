#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        deque<int>d;
        string s;
        int n, m, x;
        cin>>n>>m;
        printf("Case %d:\n", tc);
        for(int i=0; i<m; i++){
            cin>>s;
            if(s=="pushLeft"){
                cin>>x;
                if(d.size()<n){
                    printf("Pushed in left: %d\n", x);
                    d.push_front(x);
                }
                else printf("The queue is full\n");
            }
            if(s=="pushRight"){
                cin>>x;
                if(d.size()<n){
                    printf("Pushed in right: %d\n", x);
                    d.push_back(x);
                }
                else printf("The queue is full\n");
            }
            if(s=="popLeft"){
                if(d.size()>0){
                    printf("Popped from left: %d\n", d.front());
                    d.pop_front();
                }
                else printf("The queue is empty\n");
            }
            if(s=="popRight"){
                if(d.size()>0){
                    printf("Popped from right: %d\n", d.back());
                    d.pop_back();
                }
                else printf("The queue is empty\n");
            }
        }
    }
}
