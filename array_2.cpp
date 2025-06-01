#include <iostream>
#include <algorithm>  // for fill()
using namespace std;

int main() {
    // 1. Using fill() to fill array with a fixed value
    int arr[5];
    fill(arr, arr + 5, 7);  // fills all 5 elements with 7

    cout << "Array after fill(): ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    // 2. Fill an array with user input
    int userArr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> userArr[i];
    }

    cout << "Array filled by user: ";
    for (int i = 0; i < 5; i++) {
        cout << userArr[i] << " ";
    }
    cout << "\n\n";

    // 3. Multidimensional array (2D array)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "2D Array (Matrix):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
