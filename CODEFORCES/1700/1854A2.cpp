#include<bits/stdc++.h>
#define N 35
using namespace std;
int n,t,a[N];
int ans[N][2],tot;
void modify(int x,int y){
	a[x]+=a[y];
	++tot;
	ans[tot][0]=x;
	ans[tot][1]=y;
}
int main(){
	scanf("%d",&t);
	while(t--){
		tot=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		int cnt1=0,p1,cnt2=0,p2;
		for(int i=1;i<=n;i++){
			if(a[i]>0) cnt1++,p1=i;
			if(a[i]<0) cnt2++,p2=i;
		}
		if(cnt1>12){
			for(int i=1;i<=5;i++) modify(p1,p1);
		}
		if(cnt2>12){
			for(int i=1;i<=5;i++) modify(p2,p2);
		}
		int p=0;
		for(int i=1;i<=n;i++){
			if(abs(a[i])>abs(a[p])) p=i;
		}
		if(a[p]>0){
			for(int i=1;i<=n;i++){
				if(a[i]<0) modify(i,p);
			}
			for(int i=1;i<n;i++) modify(i+1,i);
		}
		if(a[p]<0){
			for(int i=1;i<=n;i++){
				if(a[i]>0) modify(i,p);
			}
			for(int i=n;i>1;i--) modify(i-1,i);
		}
		cout<<tot<<"\n";
		for(int i=1;i<=tot;i++) cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
    }
}