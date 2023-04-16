#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character

    while (n--) {
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower); // Convert to lowercase
        bool yelling = false;
        for (int i = 0; i < s.size() - 2; i++) {
            if (s[i] == 'a' && s[i+1] == 'a' && s[i+2] == 'a') {
                yelling = true;
                break;
            }
        }
        if (yelling) {
            cout << "Love is war!\n";
        } else {
            cout << "Just friends <3\n";
        }
    }

    return 0;
}
