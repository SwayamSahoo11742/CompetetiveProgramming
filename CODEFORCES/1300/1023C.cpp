
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,l=0,r=0;
	string s;
	cin>>n>>k>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('&&l!=k/2) cout<<"(",l++;
		if(s[i]==')'&&r<l) cout<<")",r++;
	}
	return 0;
}
 
 