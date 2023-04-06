#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		string s;
		cin>>s;
		int mid = (n-1)/2+1;
		int j=0;
		while (j<mid && s[j]==s[n-1-j]) j++;
		while (j<mid && s[j]!=s[n-1-j]) j++;
		while (j<mid && s[j]==s[n-1-j]) j++;
		string ans = (j==mid) ? "Yes" : "No";
		cout<<ans<<endl;
	}
	return 0;
}