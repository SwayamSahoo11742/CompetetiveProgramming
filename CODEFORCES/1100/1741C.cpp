#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2020;

int n;
int arr[MAXN];

int go(int i, int sum) {
	if (i == n) return 0;
	for (int j = i + 1, cur = 0; j <= n; ++j) {
		cur += arr[j - 1];
		if (cur > sum) return n;
		if (cur == sum) return max(j - i, go(j, sum));
	}
	return n;
}

int solve() {
	int ans = n;
	for (int len = 1, sum = 0; len < n; ++len) {
		sum += arr[len - 1];
		ans = min(ans, go(0, sum));
	}
	return ans;
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		cout << solve() << endl;
	}
}