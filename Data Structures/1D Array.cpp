/*
Definition: 
A linear list of elements stored in a single row.
*/

#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    // Traversal and Access
    cout << "1D Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}