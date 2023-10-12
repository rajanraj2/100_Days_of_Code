// Link to problem :
// https://leetcode.com/problems/single-number/

// this code will work if the vector has only one single number and rest all are repeated twice

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};

int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout<< "Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>> nums[i];
    }
    Solution sol;
    cout<< "The single number is: "<< sol.singleNumber(nums);
    return 0;   
}