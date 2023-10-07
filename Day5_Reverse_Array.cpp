// Link to problem :
// https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?leftPanelTab=1

#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while (start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    // OR we can use this method:

    /* 
    int s = 0;
    int e = n-1;
    while (s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    */
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n]; 
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);
    cout<<"Reversed array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}