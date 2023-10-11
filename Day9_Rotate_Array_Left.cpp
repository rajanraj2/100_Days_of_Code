// Link to problem:
// https://www.codingninjas.com/studio/problems/rotate-array_1230543?leftPanelTab=0

#include <iostream>
#include <vector>
using namespace std;


vector<int> rotateArray(vector<int>arr, int k) {
    
     int n = arr.size();
    k = k % n; 
    vector<int> rotatedArr(n);

    for (int i = 0; i < n; i++) {
        int newIndex = (i - k + n) % n;
        rotatedArr[newIndex] = arr[i];
    }

    return rotatedArr;

}
 
int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout<< "Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    int k;
    cout<< "Enter the number of rotations: ";
    cin >> k;
    vector<int> rotatedArr = rotateArray(arr,k);
    cout<< "The rotated array is: ";
    for (int i=0;i<n;i++){
        cout<< rotatedArr[i] << " ";
    }
    return 0;
}