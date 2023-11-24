// Link to problem :
// https://leetcode.com/problems/maximum-number-of-pairs-in-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int pairs = 0;
        int leftovers = 0;
        for (int num : nums) {
            countMap[num]++;
        }
        for (const auto& entry : countMap) {
            pairs += entry.second / 2;
            leftovers += entry.second % 2;
        }
        return {pairs, leftovers};
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
    vector<int> result = obj.numberOfPairs(nums);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}