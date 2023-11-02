// Link to problem :
// https://leetcode.com/problems/missing-number/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missing = 0;

        for (int i = 0; i < n; i++) {
            missing ^= nums[i];
        }

        for (int i = 1; i <= n; i++) {
            missing ^= i;
        }
        return missing;
    }
};

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    coutn << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    Solution s;
    int missing = s.missingNumber(nums);
    cout << "The missing number is: " << missing << endl;
    return 0;
}