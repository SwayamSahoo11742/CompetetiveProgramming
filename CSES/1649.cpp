#include <bits/stdc++.h>
using namespace std;
vector<int> st;
vector<int> a;
int SegTree(int si, int l, int r){
    if(l==r){
        st[si] = a[l];
        return a[l];
    }
    int mid = (l+r)/2;
    st[si] = min(SegTree(2*si+1, l, mid), SegTree(2*si+2, mid+1, r));
    return st[si];
}

void stupd(int si, int sl, int sr, int pos, int val)
{
    if (sl == sr) {
        st[si] = val;
        return;
    }
    int mid = sl + (sr - sl) / 2;
    if (pos <= mid)
        stupd(si * 2 + 1, sl, mid, pos, val);
    else
        stupd(si * 2 + 2, mid + 1, sr, pos, val);
    st[si] = min(st[2 * si + 1], st[2 * si + 2]);
}

int stmin(int si, int sl, int sr, int l, int r){
    if(l <= sl && r >= sr){
        return st[si];
    }else if(l > sr || r < sl){
        return INT_MAX;
    }
    int mid = (sl+sr)/2;
    return min(stmin(2 * si + 1, sl, mid, l, r), stmin(2 * si + 2, mid + 1, sr, l, r));
}
int main(){
    int n, q; cin >> n >> q;
    a.resize(n);
    st.resize(n*4+1);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    SegTree(0, 0, n-1);
    // for(int i : st){
    //     cout << i<< endl;
    // }
    while(q--){
        int t,b,c; cin >> t >> b >> c;
        if(t == 2){
            cout << stmin(0,0,n-1,b-1,c-1) << endl;
        }else{
            a[b-1] = c;
            stupd(0, 0, n-1, b-1, c);
        }
    }
    
}