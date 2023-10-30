// Link to problem:
// https://leetcode.com/problems/find-lucky-integer-in-an-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        
        for (int num : arr) {
            freqMap[num]++;
        }
        
        for (int i = 1000; i >= 1; i--) {
            if (freqMap[i] == i) {
                return i;
            }
        }
        
        return -1;
    }
};

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Solution obj;
    cout<<"The lucky integer is: "<<obj.findLucky(arr)<<endl;
    return 0;
}