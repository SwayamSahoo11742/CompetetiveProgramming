#include <iostream>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2==1){
        	cout<<"Yes"<<endl;
        	for(int i=0;i<n;i++)
        	{
            	cout<<(2*i%n)+1<<" "<<2*n-i<<"\n";
        	}
    	}
    	else
    	{
        	cout<<"No"<<endl;
    	}
	}
}