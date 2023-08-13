#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
  ios::sync_with_stdio(false);
  int x; string s; cin>>x>>s;
  int n=count(s.begin(),s.end(),'+'),m=x-n;
  int t; cin>>t;
  while(t--){
    int a,b; cin>>a>>b;
    if(a==b)cout<<(n==m?"YES\n":"NO\n");
    else cout<<((m-n)*b%(a-b)||(m-n)*b/(a-b)<-m||(m-n)*b/(a-b)>n?"NO\n":"YES\n");
  }
  return 0;
}