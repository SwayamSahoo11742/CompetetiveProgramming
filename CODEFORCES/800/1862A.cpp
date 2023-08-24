#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m;
    cin>>tc;
    while(tc--&&cin>>n>>m){
        string s1[n],s2="vika";
		for(auto &x:s1)cin>>x;
		int id(0);
		for(int i=0; i<m&&id<4; i++){
			for(int j=0; j<n; j++)
				if(s2[id]==s1[j][i]){
					id++; break;
				}
		}
        puts(id==4?"YES":"NO");
    }
}