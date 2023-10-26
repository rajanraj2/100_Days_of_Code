// Link to problem :
// https://www.codingninjas.com/studio/problems/power-of-three_1262143?leftPanelTab=0

#include <bits/stdc++.h> 
using namespace std;

int isPowerOfThree(int n) {
	if (n <= 0) {
        return false; 
    }
    while (n > 1) {
        if (n % 3 != 0) {
            return false; 
        }
        n /= 3;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    cout << isPowerOfThree(n) << endl;
    return 0;
}