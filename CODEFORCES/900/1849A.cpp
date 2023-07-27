#include <iostream>
using namespace std;
int main()
{
    int t,b,c,h;
	cin>>t;
	while(t--)
	{
		cin>>b>>c>>h;
		cout<<min(b-1,c+h)*2+1<<endl;
	}
}