#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> elements(n);
        for (int i = 0; i < n; ++i) {
            cin >> elements[i];
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < n; ++i) {
            pq.push({elements[i], i});
        }

        while (k > 0) {
            auto [value, position] = pq.top();
            pq.pop();

            int removed_elements = position - (pq.empty() ? 0 : pq.top().second);
            k -= removed_elements;

            position += n;
            pq.push({value, position});
        }

        cout << pq.top().first << endl;
    }

    return 0;
}
