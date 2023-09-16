#include<bits/stdc++.h>
using namespace std;
int a[200005],l[200005],r[200005];

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		int s=0;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
			s+=a[i];
		}
		if(s&1)
		{
			cout << -1 << endl;
			continue;
		}
		int k=1;
		l[k]=r[k]=1;
		bool flag=true;
		s>>=1;
		for(int i=2;i<=n;i++)
		{
			if(s*a[i]>0 && flag)
			{
				s-=a[i];
				flag=false;
				r[k]=i;
			}else{
				k++;
				flag=true;
				l[k]=r[k]=i;
			}
		}
		cout << k << endl;
		for(int i=1;i<=k;i++)
		{
			cout << l[i] << ' ' << r[i] << endl;
		}
	}
}
