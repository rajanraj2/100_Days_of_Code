// Link to problem :
// https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    if (n == 0) {
        return INT_MIN;
    }

    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
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
    cout<<"Largest element is: "<<largestElement(arr, n)<<endl;
    return 0;
}