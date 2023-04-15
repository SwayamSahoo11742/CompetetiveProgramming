#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n;
    cin >> t;
    string s;
    while(t--){
    	cin >> n;
    	cin >> s;

    	bool check = false;
    	for(ll i = 0; i < n - 1; i++){
    		string prev = s.substr(i, 2);
    		for(ll j = i + 2; j < n; j++){
    			string curr = s.substr(j, 2);
    			if(curr == prev){
    				check = true;
    				break;
    			}
    		}
    	}

    	if(check){
    		cout << "YES\n";
    	}
    	else{
    		cout << "NO\n";
    	}
    }
    
	return 0;
}