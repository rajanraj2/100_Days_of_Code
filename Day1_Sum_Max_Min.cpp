// Link to problem on Coding Ninjas:
// https://www.codingninjas.com/studio/problems/sum-of-max-and-min_1081476?leftPanelTab=1

#include <iostream>

int sumOfMaxMin(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    int sum = max + min;
    return sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int result = sumOfMaxMin(arr, n);
    std::cout << "Sum of maximum and minimum elements in the array: " << result << std::endl;

    return 0;
}
