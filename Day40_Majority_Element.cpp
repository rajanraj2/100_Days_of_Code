//  Link to problem :
// https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            } else if (nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }

        count = 0;
        for (int num : nums) {
            if (num == candidate) {
                count++;
            }
        }
        return (count > nums.size() / 2) ? candidate : -1;
    }
};

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    Solution obj;
    cout<<"The majority element is: "<<obj.majorityElement(nums)<<endl;
    return 0;
}