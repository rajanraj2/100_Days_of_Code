#include <bits/stdc++.h> 
#include <vector>
using namespace std;

bool checkDuplicate(vector<int> &arr, int n, int k) {
    unordered_set<int> elementsSet;
    
    for (int i = 0; i < n; i++) {
        if (elementsSet.count(arr[i]) > 0) {
            return true; 
        }
        
        elementsSet.insert(arr[i]);
        if (i >= k) {
            elementsSet.erase(arr[i - k]);
        }
    }
    
    return false; 
}

int main(){
    int n, k;
    cout<<"Enter the number of elements: ";
    cin >> n;
    cout<<"Enter the value of k: ";
    cin >> k;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << checkDuplicate(arr, n, k) << endl;
    return 0;
}