#include <iostream>
#include <cstdlib>  // For malloc, calloc, realloc, and free
using namespace std;

int main() {
    // ----------- malloc ----------
    // malloc allocates memory but does NOT initialize it
    int *ptr1 = (int*) malloc(3 * sizeof(int));  // space for 3 ints

    if (ptr1 == nullptr) {
        cout << "Memory not allocated with malloc!" << endl;
        return 1;
    }

    cout << "Malloc values (garbage): ";
    for (int i = 0; i < 3; i++) {
        cout << ptr1[i] << " ";  // May print garbage values
    }
    cout << endl;

    // ----------- calloc ----------
    // calloc allocates and also initializes memory with 0
    int *ptr2 = (int*) calloc(3, sizeof(int));  // space for 3 ints, all zero

    if (ptr2 == nullptr) {
        cout << "Memory not allocated with calloc!" << endl;
        return 1;
    }

    cout << "Calloc values (all zeros): ";
    for (int i = 0; i < 3; i++) {
        cout << ptr2[i] << " ";  // Will print 0 0 0
    }
    cout << endl;

    // ----------- realloc ----------
    // realloc changes size of previously allocated memory
    ptr2 = (int*) realloc(ptr2, 5 * sizeof(int));  // resize to 5 ints

    cout << "After realloc to 5 ints: ";
    for (int i = 0; i < 5; i++) {
        cout << ptr2[i] << " ";  // First 3 will be 0, others may be garbage
    }
    cout << endl;

    // ----------- free ----------
    // Always free dynamically allocated memory
    free(ptr1);  // free malloc memory
    free(ptr2);  // free realloc/calloc memory

    cout << "Memory freed!" << endl;

    return 0;
}
