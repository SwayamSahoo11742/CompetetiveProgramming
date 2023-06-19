/*
 ID: swayams4
 LANG: C++
 PROG: skidesign
*/
#include <bits/stdc++.h>

using namespace std;

int n,hills[1000];

int main()
{
	ifstream fin("skidesign.in");
	fin >> n;
	for (int i=0; i<n; i++)
		fin >> hills[i];
	fin.close();
	int mincost=1000000000;
	for (int i=0; i<=83; i++)
	{
		// calculate the cost for elevation interval (i,i+17)
		int cost=0,x;
		for (int j=0; j<n; j++)
		{
			// if hill is below the interval
			if (hills[j]<i)
				x=i-hills[j];
			// if hill is above the interval
			else if (hills[j]>i+17)
				x=hills[j]-(i+17);
			// if hill is int the interval
			else
				x=0;
			cost+=x*x;
		}
		// update the minimum cost
		mincost=min(mincost,cost);
	}

	ofstream fout("skidesign.out");
	fout << mincost << "\n";
	fout.close();
}
