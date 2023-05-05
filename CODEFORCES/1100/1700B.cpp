#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 2e6+50;
string SUB(string a,string b){
	int n=a.size();
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	string c(n,'0');
	for(int i=0;i<n;i++){
		int x=a[i]-b[i]+c[i]-'0';
		if(x<0){
			c[i+1]--;
			x+=10;
		}
		c[i]=x+'0';
	}
	reverse(c.begin(),c.end());
	if(c[0]=='0') c=c.substr(1);
	return c;
} 
signed main(void){
	ios::sync_with_stdio(false);cin.tie(0);
	int T;cin>>T;
	while(T--){
		int n;
		cin>>n;
		string s;
		cin>>s;	
		string tar(n,'9');
		if(s[0]=='9') tar=string(n+1,'1'),s="0"+s;
		cout<<SUB(tar,s)<<"\n";
	}
	return 0;
}