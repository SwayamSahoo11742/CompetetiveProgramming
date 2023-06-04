/*
ID: swayams4
LANG: C++
TASK: dualpal
*/
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    for (unsigned int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}

string convertToBase(int decimalInteger, int base) {
    string digits = "0123456789ABCDEFGHIJ";
    string s = "";

    while (decimalInteger) {
        s += digits[decimalInteger % base];
        decimalInteger /= base;
    }

    reverse(s.begin(), s.end());
    return s;
}

vector<int> getDualPalindromes(int N, int S) {
    vector<int> palindromes;
    int c = S + 1;
    int v = 0;

    while (v < N) {
        int p = 0;
        for (int b = 2; b <= 10; b++)
            if (isPalindrome(convertToBase(c, b)))
                p++;

        if (p >= 2) {
            palindromes.push_back(c);
            v++;
        }

        c++;
    }

    return palindromes;
}

int main() {
    ifstream fin("dualpal.in");
    ofstream fout("dualpal.out");

    int N, S;
    fin >> N >> S;

    vector<int> palindromes = getDualPalindromes(N, S);
    for (unsigned int i = 0; i < palindromes.size(); i++) {
        fout << palindromes[i] << endl;
    }

    return 0;
}