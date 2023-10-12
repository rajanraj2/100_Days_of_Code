#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k) {
    int pivot = getPivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k);
    } else {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main(){
    int n;
    cout<< "Enter the size of array: ";
    cin >> n;   
    vector<int> arr(n);
    cout<< "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cout<< "Enter the element to be searched: ";
    cin >> k;
    cout << search(arr, n, k) << endl;

}