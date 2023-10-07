// Link to problem :
// https://leetcode.com/problems/move-zeroes/

#include <iostream>
using namespace std;

void moveZeroes(int nums[], int n) {
    int i = 0;
    for (int j=0;j<n;j++){
        if (nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }   
    moveZeroes(nums,n);
    cout<<"Array after moving zeroes: ";
    for (int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
