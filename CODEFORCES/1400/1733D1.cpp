#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
long long d, n, t, x, y;
string a, b;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(cin >> t; t--;)
	{
		cin >> n >> x >> y >> a >> b;
		d = 0;
		for(int i = 0; i < n; i++)
		{
			a[i] ^= b[i];
			d += a[i];
		}
		if(d % 2)
		{
			cout << -1 << endl;
			continue;
		}
		if(d == 2)
		{
			int l, r;
			for(l = 0; !a[l]; )l++;
			for(r = n - 1; !a[r]; )r--;
			if(l + 1 == r)cout << min(x, 2 * y) << endl;
			else cout << min((r - l) * x, y) << endl;
		}
		else cout << d / 2 * y << endl;
	}
}