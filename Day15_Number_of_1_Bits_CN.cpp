// Link to problem :
// https://www.codingninjas.com/studio/problems/number-of-bits-1-in-a-number_1235167?leftPanelTab=0

#include <bits/stdc++.h> 
int countOnBits(int num) { 
	int count = 0;
    
    while (num > 0) {
        count += (num & 1); 
        num >>= 1;           
	}
    
    return count;
}

int main(){
    int n;
    std::cout<<"Enter the number: ";
    std::cin >> n;
    std::cout << countOnBits(n) << std::endl;
    return 0;
}