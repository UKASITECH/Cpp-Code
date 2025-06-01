#include <iostream>
#include <algorithm>  // for sort(), reverse(), max_element(), min_element()
using namespace std;

int main() {
    int arr[] = {5, 8, 2, 9, 1, 7};
    
    // -------- SIZE OF ARRAY --------
    int size = sizeof(arr) / sizeof(arr[0]);  // total elements
    cout << "Array size: " << size << endl;

    // -------- ORIGINAL ARRAY --------
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // -------- SORTING ARRAY --------
    sort(arr, arr + size);  // sorts array in ascending order
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // -------- REVERSING ARRAY --------
    reverse(arr, arr + size);  // reverses the entire array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // -------- FIND MAX AND MIN --------
    int maxVal = *max_element(arr, arr + size);  // returns max value
    int minVal = *min_element(arr, arr + size);  // returns min value
    cout << "Max value: " << maxVal << endl;
    cout << "Min value: " << minVal << endl;

    // -------- SUM OF ARRAY ELEMENTS --------
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // adding elements
    }
    cout << "Sum of array: " << sum << endl;

    // -------- SEARCHING ELEMENT --------
    int key = 9;
    bool found = binary_search(arr, arr + size, key);  // works only on sorted array
    cout << "Is " << key << " present? " << (found ? "Yes" : "No") << endl;

    return 0;
}
