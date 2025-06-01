#include <iostream>
using namespace std;

// -------- GLOBAL VARIABLE --------
// Declared outside all functions - accessible everywhere
int globalVar = 100;

void showScope() {
    // -------- LOCAL VARIABLE --------
    // Exists only inside this function
    int localVar = 50;
    cout << "Inside showScope() - localVar: " << localVar << endl;
    cout << "Inside showScope() - globalVar: " << globalVar << endl;
}

int main() {
    // -------- BLOCK SCOPE --------
    int a = 10;
    {
        int b = 20; // b only exists inside this block
        cout << "Inside block - a: " << a << ", b: " << b << endl;
    }
    // cout << b; // ❌ Error: b is out of scope here

    // Accessing global variable
    cout << "Inside main() - globalVar: " << globalVar << endl;

    // Calling function to show local scope
    showScope();

    // cout << localVar; // ❌ Error: localVar not accessible here

    return 0;
}
