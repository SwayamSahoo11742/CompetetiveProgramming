#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> make_non_decreasing(int n, vector<int>& arr) {
    vector<pair<int, int>> operations;
    for (int i = 0; i < n - 1; ++i) {
        while (arr[i] > arr[i + 1]) {
            for (int j = i + 1; j < n; ++j) {
                if (arr[i] >= arr[j]) {
                    operations.push_back(make_pair(i + 1, j + 1));
                    arr[i] += arr[j];
                    break;
                }
            }
            // If no j satisfies arr[i] >= arr[j], break the while loop
            if (arr[i] <= arr[i + 1])
                break;
        }
    }
    return operations;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        vector<pair<int, int>> operations = make_non_decreasing(n, arr);
        int k = operations.size();

        // Output the result
        cout << k << "\n";
        for (auto op : operations) {
            cout << op.first << " " << op.second << "\n";
        }
    }

    return 0;
}