// Link to problem :
// https://www.codingninjas.com/studio/problems/reverse-the-array_1262298?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	int start=m+1;
	int end=arr.size()-1;
	while (start<=end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the index: ";
    cin>>m;
    reverseArray(arr,m);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}