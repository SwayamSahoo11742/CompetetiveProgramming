#include<bits/stdc++.h>
using namespace std;
int n,k;
void sol(){
cin >> n >> k;
for(int i=1;i<=n;i++){
if(k>=i)printf("2 "),k-=i;
else if(k)printf("%d ",-2*(i-k)+1),k=0;
else printf("-1000 ");
}
puts("");
}
int main(){
int T;
cin>>T;
while(T--)sol();
return 0;
}