
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int n,k,x;
map<int,int> c;
void solve(){
	cin>>n>>k,c.clear();
	for(int i=1;i<=n;++i)cin>>x,++c[x];
	int l=-1,r=-1,L=-1,R=-2;
	for(auto &[s,t]:c){
		if(t>=k){
			if(r<s-1)l=r=s;
			else r=s;
			if(R-L+1<r-l+1)L=l,R=r;
		}
	}
	if(L==-1)cout<<-1<<'\n';
	else cout<<L<<' '<<R<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
    	 	  				  	 				 		  		 		