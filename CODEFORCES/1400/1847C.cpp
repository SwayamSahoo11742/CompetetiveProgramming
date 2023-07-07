
#include<bits/stdc++.h>
using namespace std;
 

#define INT_SIZE 32

struct TN
{
    int value;
    TN *arr[2];
};

TN *newNode()
{
    TN *tmp = new TN;
    tmp->value = 0;
    tmp->arr[0] = tmp->arr[1] = NULL;
    return tmp;
}
void insert(TN *root, int pre_xor)
{
    TN *tmp = root;
 
    for (int i=INT_SIZE-1; i>=0; i--)
    {
        bool val = pre_xor & (1<<i);
 
        if (tmp->arr[val] == NULL)
            tmp->arr[val] = newNode();
 
        tmp = tmp->arr[val];
    }
    tmp->value = pre_xor;
}
 

int query(TN *root, int pre_xor)
{
    TN *tmp = root;
    for (int i=INT_SIZE-1; i>=0; i--)
    {

        bool val = pre_xor & (1<<i);
 
        if (tmp->arr[1-val]!=NULL)
            tmp = tmp->arr[1-val];
 
        else if (tmp->arr[val] != NULL)
            tmp = tmp->arr[val];
    }
    return pre_xor^(tmp->value);
}
 
int maxSubarrayXOR(int arr[], int n)
{
    TN *root = newNode();
    insert(root, 0);
    int result = INT_MIN, pre_xor =0;
 
    for (int i=0; i<n; i++)
    {
        pre_xor = pre_xor^arr[i];
        insert(root, pre_xor);
        result = max(result, query(root, pre_xor));
    }
    return result;
}
 
int main()
{
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int a[n]; 
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << maxSubarrayXOR(a, n) << endl;
    }

}
