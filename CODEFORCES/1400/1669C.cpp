#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int t,n,m,k;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		vector<pair<LL,LL> > a,b;
		for(int i=1;i<=n;i++){
			LL x;
			cin>>x;
			LL cnt=1;
			while(x%m==0) cnt*=m,x/=m;
			if(a.empty()||a.back().first!=x) a.push_back({x,cnt});
			else a.back().second+=cnt;
		}
		cin>>k;
		for(int i=1;i<=k;i++){
			LL x;
			cin>>x;
			LL cnt=1;
			while(x%m==0) cnt*=m,x/=m;
			if(b.empty()||b.back().first!=x) b.push_back({x,cnt});
			else b.back().second+=cnt;
		}
		cout<<(a==b?"Yes":"No")<<endl;
	}


	return 0;
}
