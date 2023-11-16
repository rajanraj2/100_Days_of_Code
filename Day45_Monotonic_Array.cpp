// Link to problem :
// https://leetcode.com/problems/monotonic-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                decreasing = false;
            } else if (nums[i] < nums[i - 1]) {
                increasing = false;
            }
            if (!increasing && !decreasing) {
                return false;
            }
        }
        return increasing || decreasing;
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
    cout<<"Is the array monotonic? "<<obj.isMonotonic(nums)<<endl;
    return 0;
}