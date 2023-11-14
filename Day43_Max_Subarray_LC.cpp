// Link to problem :
// https://leetcode.com/problems/maximum-subarray/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < n; i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    Solution obj;
    cout<<"Maximum sum of subarray is: "<<obj.maxSubArray(nums)<<endl;
    return 0;
}