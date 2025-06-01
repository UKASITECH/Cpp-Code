#include <iostream>
using namespace std;

int main() {
    int arr[] = {100, 200, 300, 400, 500};

    // -------- RANGE-BASED FOR LOOP (for-each loop) --------
    // Iterates over each element directly without index
    cout << "Elements in the array: ";
    for (int value : arr) {
        cout << value << " ";  // 'value' is each element in arr
    }
    cout << endl;

    return 0;
}
