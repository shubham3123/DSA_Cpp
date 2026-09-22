/* 

Definition: 

Unlike raw C-style arrays, dynamic arrays grow or shrink automatically during runtime. In C++, dynamic arrays are implemented using std::vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Dynamic array declaration
    vector<int> dynamicArr = {10, 20, 30};

    // Adding elements dynamically
    dynamicArr.push_back(40);
    dynamicArr.push_back(50);

    cout << "Dynamic Array (std::vector) elements: ";
    for (int val : dynamicArr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}