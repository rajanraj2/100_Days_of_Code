// Link to problem:
// https://www.codingninjas.com/studio/problems/find-unique_625159?leftPanelTab=0

#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= arr[i];
    }
    return unique;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The unique element is: "<<findUnique(arr, n)<<endl;
    return 0;
}