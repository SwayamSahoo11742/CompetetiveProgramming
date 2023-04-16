#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int max_height = 0, start = 0, operations = 0;
    for(int i = 0; i < n; i++) {
        if(h[i] > max_height) {
            // Build wall on the interval [start, i - 1]
            for(int j = start; j < i; j++) {
                operations += max_height - h[j];
            }
            // Update current maximum height and start index
            max_height = h[i];
            start = i;
        }
    }
    // Build wall on the last interval
    for(int i = 0; i < n; i++) {
        if (h[i] == max_height) {
            continue;
        }
        max_height = max(max_height, h[i]);
        operations += max_height - h[i];
    }


    cout << operations << endl;

    return 0;
}
