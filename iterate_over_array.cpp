#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  // total number of elements

    // -------- METHOD 1: Using for loop with index --------
    cout << "Using for loop: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // -------- METHOD 2: Using while loop --------
    cout << "Using while loop: ";
    int i = 0;
    while (i < size) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;

    // -------- METHOD 3: Using do-while loop --------
    cout << "Using do-while loop: ";
    i = 0;
    do {
        cout << arr[i] << " ";
        i++;
    } while (i < size);
    cout << endl;

    // -------- METHOD 4: Using range-based for loop (C++11+) --------
    cout << "Using range-based for loop: ";
    for (int val : arr) {
        cout << val << " ";  // val holds each element directly
    }
    cout << endl;

    return 0;
}
