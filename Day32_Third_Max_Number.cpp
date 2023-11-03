// Link to problem :
// https://leetcode.com/problems/third-maximum-number/description/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax = LLONG_MIN;
        long long secondMax = LLONG_MIN;
        long long thirdMax = LLONG_MIN;

        for (int num : nums) {
            if (num == firstMax || num == secondMax || num == thirdMax) {
                continue;
            }
            
            if (num > firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = num;
            } else if (num > secondMax) {
                thirdMax = secondMax;
                secondMax = num;
            } else if (num > thirdMax) {
                thirdMax = num;
            }
        }

        if (thirdMax == LLONG_MIN || thirdMax == secondMax) {
            return firstMax; 
        } else {
            return thirdMax;
        }
    }
};

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the values of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution s;
    int result = s.thirdMax(nums);
    cout << "The result is: " << result << endl;
    return 0;
}