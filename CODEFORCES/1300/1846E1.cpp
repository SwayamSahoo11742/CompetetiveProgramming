#include<iostream>
#include<cmath>
using namespace std;
const int N = 1000010;
bool st[N];
int main(){
	for(int i=2;1+i+i*i<N;i++){
		int sum=1+i+i*i;
		for(int j=sum;j<N;j=j*i+1){
			st[j]=1;
		}
	}
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		if(st[n]) cout << "YES\n";
		else cout <<"NO\n";
	}
	
}