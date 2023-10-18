// Link to problem :
// https://www.codingninjas.com/studio/problems/reverse-bits_2181102?leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;

long reverseBits(long n) {
    long result = 0;
    
    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}

int main(){
    long n;
    cout<<"Enter the number: ";
    cin >> n;
    cout << reverseBits(n) << endl;
    return 0;
}