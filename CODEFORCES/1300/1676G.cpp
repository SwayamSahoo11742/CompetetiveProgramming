#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<int> v(n+1);
		for(int i=2;i<=n;i++) cin>>v[i];
		string s; cin>>s;
		int ans=0;
		vector<int> cnt(n+1, 0);
		for(int i=n;i>=1;i--){
			if(s[i-1]=='B') cnt[i]++;
			else cnt[i]--;
			if(cnt[i]==0) ans++;
			cnt[v[i]]+=cnt[i];
		}
		cout<<ans<<endl;
	}
}