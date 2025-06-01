#include <iostream>
using namespace std;

int main() {
    // -------- ARRAY DECLARATION --------
    int nums[] = {10, 20, 30, 40, 50};

    // -------- ACCESSING ELEMENTS --------
    cout << "First element: " << nums[0] << endl; // Index starts from 0
    cout << "Third element: " << nums[2] << endl;

    // -------- SIZE OF ARRAY --------
    // sizeof(nums) gives total size in bytes
    // sizeof(nums[0]) gives size of one element
    int size = sizeof(nums) / sizeof(nums[0]); // total elements in array

    cout << "Total elements: " << size << endl;

    // -------- LOOPING THROUGH ARRAY --------
    cout << "All elements:\n";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // -------- MODIFYING ARRAY --------
    nums[2] = 99; // Change 3rd element
    cout << "Modified 3rd element: " << nums[2] << endl;

    return 0;
}
