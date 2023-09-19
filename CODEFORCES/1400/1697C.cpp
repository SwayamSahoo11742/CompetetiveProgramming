#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t,n,i,j;
cin>>t;
while(t--){
    cin>>n;string s,t;
    cin>>s>>t;
    for(i=0;i<n;i++){
        if(s[i]!=t[i]&&i<n-1){
          for(j=i+1; j<n&&s[j]==s[i]; j++);
          if(j<n&&s[j]==t[i]&&s[j]==s[i]+1)swap(s[j],s[i]);
        }
    }
    puts((s==t) ? "YES" : "NO");
}
}