#include<bits/stdc++.h>
using namespace std;
struct Student {
    string name;
    int kick, magic, speed, demon;
};

bool cmp(Student a, Student b) {
    if (a.demon != b.demon) return a.demon < b.demon;
    if (a.magic != b.magic) return a.magic < b.magic;
    if (a.kick != b.kick) return a.kick < b.kick;
    if (a.speed != b.speed) return a.speed < b.speed;
    return a.name > b.name; // compare names lexicographically in ascending order
}

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].kick >> students[i].magic >> students[i].speed >> students[i].demon;
    }
    sort(students.begin(), students.end(), cmp);
    reverse(students.begin(), students.end());
    for (int i = 0; i < n; i++) {
        cout << students[i].name << endl;
    }
    return 0;
}
