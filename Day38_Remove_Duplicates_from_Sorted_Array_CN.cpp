#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	int i = 0, j = 1;
  	while (j < n) {
    	if (arr[i] != arr[j]) {
      		arr[++i] = arr[j];
    	}
    	j++;
  	}
  	return i + 1;
}

int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin >> n;
	vector<int> arr(n);
	cout<<"Enter the elements of the array: ";
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	cout<<"Size of the array after removing duplicates: ";
	cout << removeDuplicates(arr, n) << endl;
	return 0;
}