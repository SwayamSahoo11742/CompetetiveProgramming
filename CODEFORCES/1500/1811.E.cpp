#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
	
	long long x;
	cin>>x;
	string s="";
	while(x!=0){
		int t=x%9;
		x/=9;
		if (t>=4) t++;
		char ch=t+'0';
		s=ch+s;
	}
	cout<<s<<endl;
	 
}
}
