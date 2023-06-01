#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	ll a,b;
	cin>>a>>b;
	ll l=sqrt(1.0L*a),r=sqrt(1.0L*b);
	ll ans=(r-l)*3+(b-r*r)/r-(a-l*l)/l+((a-l*l)%l==0);
	cout<<ans<<endl;
	}
}