// Link to problem :
// https://www.codingninjas.com/studio/problems/maximum-subarray-sum_630526?leftPanelTabValue=PROBLEM

#include <iostream>
#include <vector>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    int maxSum = 0;
    int currentSum = arr[0];
    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout<<"Maximum sum of subarray is: "<<maxSubarraySum(arr, n)<<endl;
    return 0;
}