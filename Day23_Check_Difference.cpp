// Link to problem :
// https://www.codingninjas.com/studio/problems/check-difference_1090493?leftPanelTab=0

#include <bits/stdc++.h> 
using namespace std;

bool checkDiff(int *arr,int N,int K)
{
    unordered_set<int> elements;

    for (int i = 0; i < N; i++) {
        if (elements.find(arr[i] - K) != elements.end() || elements.find(arr[i] + K) != elements.end()) {
            return true;
        }
        elements.insert(arr[i]);
    }
    return false;
}

int main(){
    int N,K;
    cout<<"Enter the size of the array: ";
    cin >> N;
    cout<<"Enter the value of K: ";
    cin >> K;
    int arr[N];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    if(checkDiff(arr,N,K))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}