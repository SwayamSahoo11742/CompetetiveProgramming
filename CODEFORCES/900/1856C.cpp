#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin >> t;
	while (t--) {
		long long n, k; cin >> n >> k;
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) {
			cin >> a[i];
		}
        for(int i = n-2; i >=0 && k > 0; i--){
            if(a[i] <= a[i+1]){
                if(k >= (a[i+1]-a[i])){
                    long long d = a[i+1]-a[i];
                    a[i]+=a[i+1]-a[i];
                    k -= d;
                }else{
                    a[i] += k;
                    break;
                }
            }
        }
        cout << *max_element(a.begin(), a.end()) << endl;
	}
	return 0;
}