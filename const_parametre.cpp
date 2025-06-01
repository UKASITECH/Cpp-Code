#include <iostream>
using namespace std;

// Function with const parameter means it **cannot modify** the argument
void printValue(const int x) {
    // x = x + 5;  // Error! Cannot modify const parameter
    cout << "Value is: " << x << endl;
}

// Function with const reference parameter (efficient for large objects)
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        // arr[i] = 10;  // Error! Can't modify array elements via const reference
    }
    cout << endl;
}

int main() {
    int num = 100;
    int myArr[] = {1, 2, 3, 4, 5};

    printValue(num);           // Pass int by const value
    printArray(myArr, 5);      // Pass array by const reference

    return 0;
}
