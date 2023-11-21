// Link to problem :
// https://www.codingninjas.com/studio/problems/nth-term-of-gp_797999?leftPanelTabValue=PROBLEM

#include <iostream>
using namespace std;

const int MOD = 1000000007;

int power(int base, int exponent) {
    if (exponent == 0) return 1;
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (1LL * base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int nthTermOfGP(int N, int A, int R) {
    if (N <= 0) {
        return -1; 
    }
    int powerValue = power(R, N - 1);
    long long result = (1LL * A * powerValue) % MOD;
    
    return static_cast<int>(result);
}

int main(){
    int N, A, R;
    cout << "Enter the value of N, A, R: ";
    cin >> N >> A >> R;
    cout << nthTermOfGP(N, A, R) << endl;
    return 0;
}