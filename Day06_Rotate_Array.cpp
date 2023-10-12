// Link to problem :
// https://leetcode.com/problems/rotate-array/


#include <iostream>
#include <vector>
using namespace std;    

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> temp(n);
    for (int i=0;i<n;i++){
        temp[(i+k)%n] = nums[i];
    }
    nums=temp;
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
    int k;
    cout<<"Enter the number of rotations: ";
    cin>>k;
    rotate(nums,k);
    cout<<"Array after rotating: ";
    for (int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}