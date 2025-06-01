#include <iostream>
using namespace std;

int main() {
    int var = 100;
    int arr[] = {10, 20, 30};

    // Address of single variable
    cout << "Address of var: " << &var << endl;

    // Address of whole array (points to first element)
    cout << "Address of arr (arr): " << arr << endl;

    // Address of each array element using & operator
    for (int i = 0; i < 3; i++) {
        cout << "Address of arr[" << i << "]: " << &arr[i] << endl;
    }

    // Accessing value by pointer
    int *ptr = arr;  // pointer points to arr[0]
    cout << "Value at pointer ptr: " << *ptr << endl;
    cout << "Value at ptr + 1: " << *(ptr + 1) << endl;  // next element

    return 0;
}
