#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
	int n, m;
	cin >> n >> m;
	char g[n + 7][m + 7];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
		}
	}
	for (int j = 0; j < m; j++) {
		int last = n - 1;
		for (int i = n - 1; i >= 0; i--) {
			if (g[i][j] == 'o') {last = i - 1;}
			else if (g[i][j] == '*') {swap(g[i][j], g[last][j]); last--;}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << g[i][j];
		}
		cout << '\n';
	}
    }

}