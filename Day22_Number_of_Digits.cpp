// Link to problem :
// https://www.codingninjas.com/studio/problems/number-of-digits_4538242?leftPanelTab=0

#include <bits/stdc++.h> 
using namespace std;

int countDigit(long long x) {
    int count = 0;

    if (x == 0) {
        return 1;
    }

    while (x != 0) {
        x /= 10;
        count++;
    }

    return count;
}

int main(){
    long long x;
    cout<<"Enter the number: ";
    cin >> x;
    cout<<"The number of digits in "<<x<<" is: ";
    cout << countDigit(x) << endl;
    return 0;
}