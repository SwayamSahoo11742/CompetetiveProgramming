/*
ID: swayams4
PROG: sprime
LANG: C++
*/

#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}

vector<int> getSuperprimeRibs(int N) {
    vector<int> ribs;

    if (N == 1) {
        ribs.push_back(2);
        ribs.push_back(3);
        ribs.push_back(5);
        ribs.push_back(7);
    } else {
        vector<int> otherRibs = getSuperprimeRibs(N - 1);
        for (unsigned int i = 0; i < otherRibs.size(); i++) {
            for (int j = 1; j < 10; j += 2) {
                int n = otherRibs[i] * 10 + j;
                if (isPrime(n))
                    ribs.push_back(n);
            }
        }
    }

    sort(ribs.begin(), ribs.end());

    return ribs;
}

int main() {
    ifstream fin("sprime.in");
    ofstream fout("sprime.out");

    int N;
    fin >> N;
    vector<int> ribs = getSuperprimeRibs(N);
    for (unsigned int i = 0; i < ribs.size(); i++)
        fout << ribs[i] << endl;

    return 0;
}