#include <bits/stdc++.h>
using namespace std;
const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
int n,k; string str;
void execute(int test_number)
{
  cin>>n>>k>>str;
  vector <int> count_char(26, 0);
  for (char c: str) count_char[c - 'a']++;
  string ans = "";
  for (int i = 0; i < min(25, n/k); i++) {
    while (k - ans.size() > count_char[i]) {
      ans.push_back(i + 'a');
    }
  }

  char c = 'a' + min(n / k, 25);
  while (k > ans.size()) {
    ans += c;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << "\n";
}
int main(){
    int T; cin >> T;
    while(T--){
        execute(T);
    }
}
