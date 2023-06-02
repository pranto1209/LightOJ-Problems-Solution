#include<bits/stdc++.h>
using namespace std;
#define maxn 10000001
vector<int>p;
bool status[maxn];
void sieve()
{
    status[1]=0;
	for(int i=4; i<=maxn; i+=2) status[i]=0;
	for(int i=3; i*i<=maxn; i+=2){
		if(status[i]){
			for(int j=i*i; j<=maxn; j+=i) status[j]=0;
		}
	}
	for(int i=2; i<=maxn; i++) if(status[i]) p.push_back(i);
}
int main()
{
    sieve();
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int n, cnt=0;
        scanf("%d", &n);
        for(int i=0; 2*p[i]<=n; i++){
            if(status[n-p[i]]) cnt++;
        }
        printf("Case %d: %d\n", tc, cnt);
    }
}
