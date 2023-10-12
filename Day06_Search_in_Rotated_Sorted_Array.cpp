// Link to problem :
// https://leetcode.com/problems/search-in-rotated-sorted-array/


#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    for (int i=0;i<nums.size();i++){
        if (nums[i]==target){
            return i;
        }
    }
    return -1;
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
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    cout<<"Index of target element: "<<search(nums,target);

}