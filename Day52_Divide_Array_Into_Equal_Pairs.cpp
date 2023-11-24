// Link to problem 
// https://leetcode.com/problems/divide-array-into-equal-pairs/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 2) {
            if (nums[i] != nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    Solution obj;
    cout << obj.divideArray(nums) << endl;
    return 0;
}