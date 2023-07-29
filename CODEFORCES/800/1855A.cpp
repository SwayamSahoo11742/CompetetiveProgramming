#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        int count = 0;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i - 1];
            if (arr[i - 1] == i) {
                count++;
            }
        }

        int div = count / 2;
        if (count % 2 != 0)
            div++;
        cout << div << endl;
    }

    return 0;
}
