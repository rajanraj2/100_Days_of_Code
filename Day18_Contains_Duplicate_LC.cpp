#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std; 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;
        
        for (int num : nums) {
            if (numSet.find(num) != numSet.end()) {
                return true;
            }
            numSet.insert(num);
        }
        return false;
    }
};

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution sol;
    cout << sol.containsDuplicate(arr) << endl;
    return 0;
}