// Link to problem :
// https://www.codingninjas.com/studio/problems/maximum-xor_3119012?leftPanelTabValue=PROBLEM

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int maximumXor(vector<int> A)
{
    int maxXOR = 0;
    int mask = 0;

    for (int i = 31; i >= 0; i--) {
        mask = mask | (1 << i); 

        unordered_set<int> prefixes;

        for (int num : A) {
            prefixes.insert(num & mask);
        }

        int possibleMaxXOR = maxXOR | (1 << i);

        for (int prefix : prefixes) {
            int potentialXOR = possibleMaxXOR ^ prefix;
            if (prefixes.count(potentialXOR)) {
                maxXOR = possibleMaxXOR;
                break;
            }
        }
    }
    return maxXOR;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int maxXOR = maximumXor(A);
    cout << "The maximum XOR value is: " << maxXOR << endl;
    return 0;
}