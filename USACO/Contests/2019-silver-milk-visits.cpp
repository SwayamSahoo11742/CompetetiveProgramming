#include <bits/stdc++.h>
using namespace std;


int main() {
	std::ifstream read("milkvisits.in");
	int farm_num;
	int query_num;
	read >> farm_num >> query_num;

	vector<char> farms(farm_num);
	for (char &f : farms) {
		read >> f;
		assert(f == 'G' || f == 'H');
	}

	vector<vector<int>> neighbors(farm_num);
	for (int f = 0; f < farm_num - 1; f++) {
		int f1, f2;
		read >> f1 >> f2;
		f1--;
		f2--;
		neighbors[f1].push_back(f2);
		neighbors[f2].push_back(f1);
	}
	int component_num = 0;
	vector<int> component(farm_num, -1);
	for (int f = 0; f < farm_num; f++) {
		if (component[f] != -1) { continue; }
		vector<int> frontier{f};
		char type = farms[f];
		while (!frontier.empty()) {
			int curr = frontier.back();
			frontier.pop_back();
			component[curr] = component_num;
			for (int n : neighbors[curr]) {
				if (farms[n] == type && component[n] == -1) {
					frontier.push_back(n);
				}
			}
		}
		component_num++;
	}

	std::ofstream written("milkvisits.out");
	for (int q = 0; q < query_num; q++) {
		int a, b;
		char milk;
		read >> a >> b >> milk;
		a--;
		b--;

		if (component[a] == component[b]) {
			written << (farms[a] == milk);
		} else {
			written << 1;
		}
	}
}