#include<bits/stdc++.h>
using namespace std;
long long t,n,k,a[200010];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		for(int i=2;i<=n;i++)
			a[i]+=a[i-1];
		long long ans=0;
		for(int i=0;i<=k;i++)
			ans=max(ans,a[n-k+i]-a[i*2]);
		cout<<ans<<"\n";
	}
}
	 				 				 	    	     	  				