// Link to problem:
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

#include <iostream>
#include <vector>
using namespace std;  

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for (int i=1;i<n;i++){
        if (nums[i-1]>nums[i]){
            count++;
        }
    }
    if (nums[n-1]>nums[0]){
        count++;
    }
    return count<=1;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Is the array sorted and rotated: "<<check(nums);
}