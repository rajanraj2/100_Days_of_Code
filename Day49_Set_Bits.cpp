// Link to problem :
// https://www.codingninjas.com/studio/problems/set-bits_1164179?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int countBits(int n) {
    bitset<32> binaryRepresentation(n);
    return binaryRepresentation.count();
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}