#include <iostream>
#include <algorithm>
using namespace std;
const int MN = 2048;
int ps[MN];
 
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;++i)cin>>ps[i];
		int m = max_element(ps,ps+n)-ps;
		if (m==0) m = max_element(ps+1,ps+n)-ps;
 
		int l=m-1;
		if (m==n-1 && ps[l]<ps[0]) {
			l = m;
		} else {
			while(l>0 && ps[0]<ps[l-1]) --l;
		}
		reverse(ps+l,ps+m);
		rotate(ps,ps+l,ps+m);
		rotate(ps,ps+m,ps+n);
		for(int i=0; i<n; ++i) cout<<ps[i]<<' ';
		cout<<'\n';
	}
}