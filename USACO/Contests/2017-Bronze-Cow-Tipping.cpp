#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

const char TIPPED = '0';

bool flip(int r, int c, vector<vector<bool>> &cows) {
	if (cows[r][c]) {
		for (int ri = 0; ri <= r; ri++) {
			for (int ci = 0; ci <= c; ci++) { cows[ri][ci] = !cows[ri][ci]; }
		}
		return true;
	}
	return false;
}

int main() {
	freopen("cowtip.in", "r", stdin);
	freopen("cowtip.out", "w", stdout);

	int width;
	cin >> width;
	vector<vector<bool>> cows(width, vector<bool>(width));
	for (int r = 0; r < width; r++) {
		string row;
		cin >> row;
		for (int c = 0; c < width; c++) { cows[r][c] = row[c] != TIPPED; }
	}

	int x = width - 1;
	int y = width - 1;
	int min_flips = 0;
	while (x >= 0 && y >= 0) {
		min_flips += flip(x, y, cows);
		if (x != y) {
			min_flips += flip(y, x, cows);
		}
		if (x > 0) {
			x--;
		} else {
			y--;
			x = y;
		}
	}
	cout << min_flips << endl;
}
