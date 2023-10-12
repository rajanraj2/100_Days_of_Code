#include <bits/stdc++.h>

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;

    while (s<e){
        int mid = s+(e-s)/2;
        if (arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;

    while(start<=end){
        int mid = start+(end-start)/2;
        if (arr[mid]==key){
            return mid;
        }
        if (key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}




int search(int* arr, int n, int key) {
    int pivot = getPivot(arr,n);
    if (key>=arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,key);
    }
    else{
        return binarySearch(arr,0,pivot-1,key);
    }
}

int main(){
    int n;
    std::cout<< "Enter the size of array: ";
    std::cin >> n;   
    int arr[n];
    std::cout<< "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    int k;
    std::cout<< "Enter the element to be searched: ";
    std::cin >> k;
    std::cout << search(arr, n, k) << std::endl;
}