#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n;
	cout << "Enter the number of elements: " << endl;
	cin >> n;

	vector<int> arr(n);
	cout << "Enter the elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}

	//optimized bubble sort 

	for (int i = 0; i < n - 1; i++) {
		bool swapped = false;

		for (int j = 0; j < n - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;

			}

		} 
		if (!swapped) {
			break;
		}

		cout << "Sorted array: ";
		for(int i=0; i<n; i++)
		{
			cout << arr[i] << " ";
		}

	}
	return 0;
}