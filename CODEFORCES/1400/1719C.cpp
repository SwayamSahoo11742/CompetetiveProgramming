#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,q,x=1;
		map<int,int> m;
		cin>>n>>q;
		int v[n+1];
		for(int i=1;i<=n;i++)cin>>v[i];
		for(int i=2;i<=n;i++){
			if(v[i]>v[x])x=i;
			m[x]++;
		}
		m[x]=INT_MAX;
		for(int i=0;i<q;i++){
			int a,k;
			cin>>a>>k;
			k-=max(a-2,0);
			cout<<max(min(m[a],k),0)<<endl;
		}
	}
}