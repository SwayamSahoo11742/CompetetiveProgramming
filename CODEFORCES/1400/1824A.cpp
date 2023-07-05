#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin >> n >> m;
	set<int>hash;
	int tl=0,tr=0;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		if(x==-1) tl++;
		else if(x==-2) tr++;
		else hash.insert(x);
	}
	int i=0,cnt=hash.size();
	int ans=min(m, cnt+max(tl, tr));
	for(auto x:hash){
		i++;
		ans=max(ans,cnt+min(tl,x-i)+min(tr,m-x-(cnt-i)));
	}
	cout << ans << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}