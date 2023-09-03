#include <bits/stdc++.h>
using namespace std;
int t,n,m,z,l;
int a[400005];
int main(){
	cin>>t;
	while(t--)
	{	
	cin>>n;
	m=0,z=0,l=0;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		if(m<z)
		a[l++]=m,a[l++]=m;
		else
		a[l++]=m;
		z=m;
	}
	cout<<l<<endl;
	for(int i=0;i<l;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	}
	
	
	return 0;
} 