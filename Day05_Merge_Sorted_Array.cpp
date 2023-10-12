// Link to problem : 
// https://leetcode.com/problems/merge-sorted-array/

#include <iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n, int result[]) {
    int i = 0;
    int j = 0;
    int k = 0;
    while (i<m && j<n){
        if (nums1[i]<nums2[j]){
            result[k] = nums1[i];
            k++;
            i++;
        }
        else{
            result[k] = nums2[j];
            k++;
            j++;
        }
    }
    while (i<m){
        result[k] = nums1[i];
        i++;
        k++;
    }
    while (j<n){
        result[k] = nums2[j];
        j++;
        k++;
    }
}

int main(){
    int m,n;
    cout<<"Enter the number of elements in the first array: ";
    cin>>m;
    cout<<"Enter the number of elements in the second array: ";
    cin>>n;
    int nums1[m];
    int nums2[n];
    int result[m+n];
    cout<<"Enter the elements of the first array: ";
    for (int i=0;i<m;i++){
        cin>>nums1[i];
    }
    cout<<"Enter the elements of the second array: ";
    for (int i=0;i<n;i++){
        cin>>nums2[i];
    }
    merge(nums1,m,nums2,n,result);
    cout<<"Merged array: ";
    for (int i=0;i<m+n;i++){
        cout<<result[i]<<" ";
    }
}