// Link to problem :
// https://www.codingninjas.com/studio/problems/interview-shuriken-41-move-zeroes-to-end_240143

#include <iostream>
#include <vector>
using namespace std;

void pushZeroesAtEnd(vector<int> &arr){
    int i=0;
    for (int j=0;j<arr.size();j++){
        if (arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    pushZeroesAtEnd(arr);
    cout<<"Array after moving zeroes: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}