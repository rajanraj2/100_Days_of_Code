// Link to problem :
// https://www.codingninjas.com/studio/problems/product-of-array-except-self_630271?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int *getProductArrayExceptSelf(int *arr, int n)
{

    int *product = new int[n];

    for (int i = 0; i < n; i++)
    {
        product[i] = 1;
    }

    int leftProduct = 1;
    for (int i = 0; i < n; i++)
    {
        product[i] = (product[i] * leftProduct) % MOD;
        leftProduct = (leftProduct * arr[i]) % MOD;
    }

    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        product[i] = (product[i] * rightProduct) % MOD;
        rightProduct = (rightProduct * arr[i]) % MOD;
    }

    return product;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int *result = getProductArrayExceptSelf(arr, n);
    cout<<"Product of array except itself is: ";
    for(int i=0; i<n; i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}