// Link to problem :
// https://www.codingninjas.com/studio/problems/square-root-integral_893351?leftPanelTab=0

#include <iostream>
using namespace std;

int floorSqrt(int n)
{
    if (n == 0 || n == 1) {
        return n;  
    }

    int left = 1;
    int right = n;
    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid * mid == n) {
            return mid;  
        } else if (mid * mid < n) {
            result = mid; 
            left = mid + 1;
        } else {
            right = mid - 1; 
        }
    }

    return result; 
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    cout << floorSqrt(n) << endl;
    return 0;
}