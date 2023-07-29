#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100;
#define ll long long
int f[N];
ll d[N];
int find(int x){
	if(x!=f[x]){
		int root=find(f[x]);
		d[x]+=d[f[x]];
		f[x]=root;
	}
	return f[x];
} 
void merge(int x,int y,int dx){
	int a=find(x),b=find(y);
	f[a]=b;
	d[a]=d[y]+dx-d[x];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int flag=1;
		for(int i=1;i<=n;i++){
			f[i]=i;
			d[i]=0;
		}
		while(m--){
			int x,y,z;
			cin>>x>>y>>z;
			int a=find(x),b=find(y);
			if(a==b){
				if(d[x]-z!=d[y]){
					flag=0;
				}
			}
			else merge(x,y,z);
		}
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
		
		
		
	}

}