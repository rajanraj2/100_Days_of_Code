// Link to problem :
// https://leetcode.com/problems/shuffle-the-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }
        return result;
    }
};

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> nums(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> nums[i];
    }
    Solution sol;
    vector<int> result = sol.shuffle(nums, n);
    for (int i = 0; i < 2 * n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}