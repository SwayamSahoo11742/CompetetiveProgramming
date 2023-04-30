#include<bits/stdc++.h>
using namespace std;
int t,n,m,x,y,d;
int main() {
cin>>t;
while(t--) {
cin>>n>>m>>x>>y>>d;
if((1<x-d&&y+d<m)||(1<y-d&&x+d<n))
cout<<n+m-2<<endl;
else puts("-1");
}
return 0;
}