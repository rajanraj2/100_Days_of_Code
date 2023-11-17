// Link to problem :
// https://leetcode.com/problems/relative-sort-array/description/

#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> indexMap;
        for (int i = 0; i < arr2.size(); ++i) {
            indexMap[arr2[i]] = i;
        }

        auto customComparator = [&](int a, int b) {
            if (indexMap.find(a) != indexMap.end() && indexMap.find(b) != indexMap.end()) {
                return indexMap[a] < indexMap[b];
            }
            else if (indexMap.find(a) != indexMap.end()) {
                return true;
            } else if (indexMap.find(b) != indexMap.end()) {
                return false;
            }
            else {
                return a < b;
            }
        };

        sort(arr1.begin(), arr1.end(), customComparator);

        return arr1;
    }
};

int main(){
    int n1, n2;
    cout<<"Enter the size of array1: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout<<"Enter the elements of array1: ";
    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }
    cout<<"Enter the size of array2: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout<<"Enter the elements of array2: ";
    for(int i=0; i<n2; i++){
        cin >> arr2[i];
    }
    Solution obj;
    vector<int> result = obj.relativeSortArray(arr1, arr2);
    cout<<"Relative sorted array is: ";
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}