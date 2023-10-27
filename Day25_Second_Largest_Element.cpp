// Link to problem :
// https://www.codingninjas.com/studio/problems/second-largest-element-in-the-array_873375?leftPanelTab=0

#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    if (n < 2) {
        return -1;
    }

    int firstMax = INT_MIN;
    int secondMax = INT_MIN; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        return -1;
    }

    return secondMax;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Second largest element is: ";
    cout << findSecondLargest(n, arr) << endl;
    return 0;
}