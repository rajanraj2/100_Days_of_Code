// Link to problem :
// https://leetcode.com/problems/remove-element/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++; 
            }
        }
        return k;
    }
};

int main(){
    vector<int> nums;
    int n, val;
    cout<<"Enter the number of elements: ";
    cin >> n;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout<<"Enter the value to be removed: ";
    cin >> val;
    Solution sol;
    cout << sol.removeElement(nums, val) << endl;
    return 0;
}