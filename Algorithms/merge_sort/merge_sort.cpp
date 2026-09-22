#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {

    vector<int> leftArray(nums.begin() + left,
                          nums.begin() + mid + 1);

    vector<int> rightArray(nums.begin() + mid + 1,
                           nums.begin() + right + 1);

    int i = 0;
    int j = 0;
    int k = left;

    while (i < leftArray.size() && j < rightArray.size()) {

        if (leftArray[i] <= rightArray[j]) {
            nums[k] = leftArray[i];
            i++;
        }
        else {
            nums[k] = rightArray[j];
            j++;
        }

        k++;
    }

    while (i < leftArray.size()) {
        nums[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightArray.size()) {
        nums[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& nums, int left, int right) {

    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;

    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);

    merge(nums, left, mid, right);
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    mergeSort(nums, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}