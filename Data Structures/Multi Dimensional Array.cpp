/* 
Definition: 

 Arrays with three or more dimensions. A 3D array can be visualized as a collection or stack of 2D matrices (Depth X times X Rows X Columns).

*/

#include <iostream>
using namespace std;

int main() {
    // 2 blocks, each containing a 2x2 matrix
    int arr3D[2][2][2] = {
        { {1, 2}, {3, 4} },
        { {5, 6}, {7, 8} }
    };

    cout << "3D Array elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}