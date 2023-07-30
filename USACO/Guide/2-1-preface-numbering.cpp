/*
ID: swayams4
PROG: preface
LANG: C++11
*/

#include <bits/stdc++.h>
using namespace std;
const vector<char> ord = {'I', 'V', 'X', 'L', 'C', 'D','M'};
int main(){
    ifstream fin("preface.in"); ofstream fout("preface.out");
    int n; fin >> n;
    map<char, int> mp;
    for(int i = 1; i <= n; i++){
        string num = to_string(i);
        int ones = num[num.size()-1] - '0', tens, hund, thous;
        if( ones >= 4 && ones != 9){
            mp['I'] += abs(5 - ones);
            mp['V']++;
        }else if(ones < 4){
            mp['I'] += ones;
        }else{
            mp['I']++;
            mp['X']++;
        }

        if(num.size() >= 2){
            tens = num[num.size()-2]-'0';
            if( tens >= 4 && tens != 9){
                mp['X'] += abs(5 - tens);
                mp['L']++;
            }else if(tens < 4){
                mp['X'] += tens;
            }else{
                mp['X']++;
                mp['C']++;
            }
        }
        if(num.size() >= 3){
            hund = num[num.size()-3]-'0';
            if( hund >= 4 && hund != 9){
                mp['C'] += abs(5 - hund);
                mp['D']++;
            }else if(hund < 4){
                mp['C'] += hund;
            }else{
                mp['C']++;
                mp['M']++;
            }
        }
        if(num.size() >= 4){
            thous = num[num.size()-4]-'0';
            mp['M'] += thous;
        }  
    }
    for(auto i: ord){
        if(mp[i]){
            fout << i << " " << mp[i] << endl;
        }
    }
}