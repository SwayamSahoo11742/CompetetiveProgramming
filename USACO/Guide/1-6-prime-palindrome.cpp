/*
ID: swayams4
PROG: pprime
LANG: C++
*/

#include <fstream>
#include <vector>
#include <cmath>
#include <cstring>
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

int nDigits(int n) {
    int s = 0;

    while (n) {
        s++;
        n /= 10;
    }

    return s;
}

vector<int> getPalindromes(int nDigits) {
    vector<int> palindromes;

    if (nDigits == 1) {
        for (unsigned int i = 1; i <= 9; i++)
            palindromes.push_back(i);
    } else if (nDigits == 2) {
        for (unsigned int i = 1; i <= 9; i++)
            palindromes.push_back(i * 10 + i);
    } else {
        vector<int> previousPalindromes = getPalindromes(nDigits - 2);
        if (nDigits - 2 <= 2)
            previousPalindromes.push_back(0);
        int n = pow(10.0, nDigits - 1);
        for (unsigned int i = 0; i < previousPalindromes.size(); i++)
            for (unsigned int j = 1; j <= 9; j++)
                palindromes.push_back(j * n + previousPalindromes[i] * 10 + j);

        if (nDigits >= 5) {
            int ni = 100;
            for (int s = nDigits - 4; s >= 1; s -= 2) {
                vector<int> previousPalindromes = getPalindromes(s);
                if (s <= 2)
                    previousPalindromes.push_back(0);
                for (unsigned int i = 0; i < previousPalindromes.size(); i++)
                    for (unsigned int j = 1; j <= 9; j++)
                        palindromes.push_back(j * n + previousPalindromes[i] * ni + j);
                ni *= 10;
            }
        }
    }

    return palindromes;
}

vector<int> getPalindromes(int start, int end) {
    vector<int> res;
    int s = nDigits(start);
    int e = nDigits(end);

    for (int i = s; i <= e; i++) {
        vector<int> p = getPalindromes(i);
        for (unsigned int j = 0; j < p.size(); j++)
            if (p[j] >= start && p[j] <= end)
                res.push_back(p[j]);
    }

    return res;
}

vector<int> getPalindromicPrimes(int start, int end) {
    vector<int> pprimes;
    vector<int> palindromes = getPalindromes(start, end);

    for (unsigned int i = 0; i < palindromes.size(); i++)
        if (isPrime(palindromes[i]))
            pprimes.push_back(palindromes[i]);

    sort(pprimes.begin(), pprimes.end());

    return pprimes;
}

int main() {
    ifstream fin("pprime.in");
    ofstream fout("pprime.out");

    int a, b;
    fin >> a >> b;

    vector<int> pprimes = getPalindromicPrimes(a, b);
    for (unsigned int i = 0; i < pprimes.size(); i++)
        fout << pprimes[i] << endl;

    return 0;
}