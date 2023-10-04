// Link to the problem :
// https://www.codingninjas.com/studio/problems/swap-two-numbers_1112577?leftPanelTab=0

#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter the value of 'a': ";
    std::cin >> a;

    std::cout << "Enter the value of 'b': ";
    std::cin >> b;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "After swapping, 'a' is: " << a << std::endl;
    std::cout << "After swapping, 'b' is: " << b << std::endl;

    return 0;
}
