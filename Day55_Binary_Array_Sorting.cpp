// Link to problem :
// https://www.codingninjas.com/studio/problems/binary-array-sorting_985289?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

vector<int> sortBinaryArray(vector<int> arr, int n)  {
	int left = 0, right = n - 1;
    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }
		while (arr[right] == 1 && left < right) {
            right--;
        }
		if (left < right) {
            std::swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    return arr;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<< "Enter the elements of array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ans = sortBinaryArray(arr, n);
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}