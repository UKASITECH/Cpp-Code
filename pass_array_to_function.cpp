#include <iostream>
using namespace std;

// Function to print array elements
// Parameters: array 'arr[]' and its size 'n'
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[] = {2, 4, 6, 8, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);  // calculate number of elements

    cout << "Array elements are: ";
    printArray(numbers, size);  // passing array to function

    return 0;
}
