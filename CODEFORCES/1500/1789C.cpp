#include <bits/stdc++.h>
using namespace std;
int main(){
	 int t; cin>>t;
	 while(t--){
	 	 int n,m; cin>>n>>m;
	 	 int a[n+1];
	 	 map<int,int>mp;
	 	 
	 	 for(int i=1;i<=n;i++){
	 	 	 cin>>a[i];
	 	 	 mp[a[i]] = m+1;
	 	 }
	 	 for(int i=1;i<=m;i++){
	 	 	 int p,v; cin>>p>>v;
	 	 	 mp[a[p]] -= (m-i+1);
	 	 	 a[p] = v;
	 	 	 mp[v] += (m-i+1);
	 	 }
	 	 
	 	 int ans = m*(m+1)*n;
	 	 
	 	 for(auto i : mp){
	 	 	  int x = i.second;
	 	 	  ans -= (x*(x-1))/2;
	 	 }
	 	 cout<<ans<<endl; 
	 }
	
	return 0;
}