#include <iostream>
using namespace std;

int main() {
    int var = 42;
    int *ptr = &var;      // Pointer holds address of var

    cout << "Value of var: " << var << endl;
    cout << "Address of var (&var): " << &var << endl;
    cout << "Pointer ptr holds address: " << ptr << endl;
    cout << "Value pointed by ptr (*ptr): " << *ptr << endl;

    // Null pointer (points to nothing)
    int *nullPtr = nullptr;  
    cout << "nullPtr holds: " << nullPtr << endl;

    // Checking for null pointer before dereferencing
    if (nullPtr != nullptr) {
        cout << *nullPtr << endl;  // safe only if not null
    } else {
        cout << "nullPtr is null, cannot dereference!" << endl;
    }

    return 0;
}
