#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,h,i,j,num,num1,sum,sum1,p,p1,p2=1;
		cin>>n>>m>>h;
		for(i=0;i<n;i++)
		{
			num1=0;
			sum1=0;
			p1=0;
			for(j=1;j<=m;j++)
			cin>>a[j];
			sort(a+1,a+m+1);
			for(j=1;j<=m;j++)
			{
				if(num1+a[j]<=h) 
				{
			     	num1=num1+a[j];
			     	sum1=sum1+num1;
			     	p1++;
		     	}
		     	else break;
			}
			if(i==0)
			{
				p=p1;
				sum=sum1;
			}
			else
			{
			 if(p<p1||(p==p1&&sum>sum1)) p2++;
		    }
		}
		cout<<p2<<endl;
	}
	return 0;
}