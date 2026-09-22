/*
Definition: 
An array of arrays, represented as a grid or table with rows and columns. In C++ memory, 2D arrays are stored in Row-Major Order (row by row).
*/

#include <iostream>
using namespace std;

int main() {
    // 2 rows and 3 columns
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "2D Array elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}