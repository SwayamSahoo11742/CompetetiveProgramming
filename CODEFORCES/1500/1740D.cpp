#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int main()
{
	int T;cin>>T;
	while (T--)
	{
		int n,m,k,i;cin>>n>>m>>k;
		for (i=1;i<=k;i++) cin>>a[i];
		set<int> s;
		int nw=1;
		for (i=k;i;i--)
		{
			while (s.find(i)==s.end()) s.insert(a[nw++]);
			if (s.size()>n*m-3) break;
			s.erase(i);
		}
		if (!i) puts("YA");else puts("TIDAK");
	}
}