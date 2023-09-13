#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
  int t; cin>>t;
  while(t--) {
    int n; cin>>n;
    int a,b,c,d,e,f,x,y; cin>>a>>b>>c>>d>>e>>f>>x>>y;
    if(c==e) a=c;
    if(d==f) b=d;
    if((a==1||a==n)&&(b==1||b==n)) cout<<((a==x||b==y) ? "YES" : "NO")<<"\n";
    else cout<<(((a%2!=x%2) && (b%2!=y%2)) ? "NO" : "YES")<<"\n";
  }
  return 0;
}
