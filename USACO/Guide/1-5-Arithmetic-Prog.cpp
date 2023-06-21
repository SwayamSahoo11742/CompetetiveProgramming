/*
ID: swayams4
PROG: ariprog
LANG: C++
*/

#include <fstream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

struct Sequence {
    int a;
    int b;

    bool operator <(const Sequence & s) const {
        return b < s.b || (b == s.b && a < s.a);
    }
};

bool validSequence(bool * isBisquare, Sequence sequence, int N) {
    int value = sequence.a;
    for (int i = 0; i < N; i++) {
        if (!isBisquare[value])
            return false;
        value += sequence.b;
    }
    return true;
}

vector<Sequence> getSequences(int N, int M) {
    vector<int> bisquares;
    vector<Sequence> sequences;
    bool isBisquare[2 * 250 * 250 + 1];
    memset(isBisquare, false, sizeof(isBisquare));

    for (int i = 0; i <= M; i++)
        for (int j = i; j <= M; j++) {
            int n = i * i + j * j;
            if (!isBisquare[n]) {
                bisquares.push_back(n);
                isBisquare[n] = true;
            }
        }

    sort(bisquares.begin(), bisquares.end());

    int maxValue = 2 * M * M;

    for (unsigned int i = 0; i < bisquares.size(); i++) {
        for (unsigned int j = i + 1;
             j < bisquares.size() &&
                 bisquares[i] + (bisquares[j] - bisquares[i]) * (N - 1) <= maxValue;
             j++) {
            Sequence s;
            s.a = bisquares[i];
            s.b = bisquares[j] - bisquares[i];

            if (validSequence(isBisquare, s, N))
                sequences.push_back(s);
        }
    }

    sort(sequences.begin(), sequences.end());

    return sequences;
}

int main() {
    ifstream fin("ariprog.in");
    ofstream fout("ariprog.out");

    int N, M;
    fin >> N >> M;

    vector<Sequence> sequences = getSequences(N, M);
    if (sequences.size() > 0) {
        for (unsigned int i = 0; i < sequences.size(); i++)
            fout << sequences[i].a << " " << sequences[i].b << endl;
    } else {
        fout << "NONE" << endl;
    }

    return 0;
}