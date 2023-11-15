// Link to problem :
// https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?leftPanelTabValue=PROBLEM

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int findDuplicate(const vector<int>& arr) {
    unordered_set<int> seen;

    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            return num;
        } else {
            seen.insert(num);
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout<<"Duplicate number is: "<<findDuplicate(arr)<<endl;
    return 0;
}