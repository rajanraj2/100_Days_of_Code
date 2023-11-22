// Link to problem :
// https://www.codingninjas.com/studio/problems/unique-element-in-sorted-array_1112654?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr)
{
	int low = 0;
    int high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
        } else {
            if (arr[mid] == arr[mid - 1]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
    }
    return arr[low];
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << singleNonDuplicate(arr) << endl;
    return 0;
}