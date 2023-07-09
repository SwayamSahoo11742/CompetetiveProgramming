/*
ID: swayams4
PROG: holstein
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("holstein.in");
ofstream fout("holstein.out");
int V, G;
vector<int> requiredVitamins;
vector<vector<int> > feeds;
//
int bestSum = -(1 << 30);
vector<int> whichScoops;
vector<int> bestScoops;
int endPosition = 1 << 30;
int getSum(vector<int> &dose)
{
    int s = 0;
    for(int i = 0; i < dose.size(); ++i)
    {
        s += dose[i];
    }
    return s;
}
bool valid(vector<int> &dose)
{
    for(int i = 0; i < dose.size(); ++i)
    {
        if(dose[i] > 0) return false;
    }
    return true;
}
void solve(vector<int> &toBeFed, int currentScoop, int position)
{
    if(valid(toBeFed) && endPosition >= position)
    {
        bestScoops = whichScoops;
        endPosition = position-1;
        bestSum = getSum(toBeFed);
        return;
    }
    if(position == G) return;
    for(int i = currentScoop; i < feeds.size(); ++i)
    {
        vector<int> currentFeed = toBeFed;
        for(int j = 0; j < V; ++j)
        {
            currentFeed[j] -= feeds[i][j];
        }
        whichScoops[position] = i+1;
        solve(currentFeed, i+1, position + 1);
        whichScoops[position] = 0;
    }
}
int main()
{
    bestScoops.resize(26);
    whichScoops.resize(26);
    fin >> V;
    for(int i = 0; i < V; ++i)
    {
        int current;
        fin >> current;
        requiredVitamins.push_back(current);
    }
    fin >> G;
    feeds.resize(G);
    for(int i = 0; i < G; ++i)
    {
        for(int j = 0; j < V; ++j)
        {
            int currentFeedOfVitamin;
            fin >> currentFeedOfVitamin;
            feeds[i].push_back(currentFeedOfVitamin);
        }
    }
    solve(requiredVitamins, 0, 0);
    //now we print the result
    fout<<endPosition + 1<<" ";
    for(int i = 0; i <= endPosition; ++i)
    {
        fout<<bestScoops[i];
        if(i < endPosition) fout<<" ";
        else fout<<"\n";
    }
    return 0;
}