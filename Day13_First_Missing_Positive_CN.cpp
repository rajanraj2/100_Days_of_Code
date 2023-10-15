// Link to problem :
// https://www.codingninjas.com/studio/problems/first-missing-positive_699946?leftPanelTab=0

#include <iostream>
#include <vector>
using namespace std;

int firstMissing(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            std::swap(arr[i], arr[arr[i] - 1]);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return n + 1;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];   
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstMissing(arr,n);
    return 0;
}