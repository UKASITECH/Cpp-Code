#include <iostream>
using namespace std;

// -------- USER-DEFINED FUNCTION --------
// Syntax: return_type function_name(parameters) { ... }

// Function to add two numbers
int add(int a, int b) {
    return a + b;  // returns the sum or any code block
}

int main() {
    int x, y;

    // Asking user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Calling the user-defined function
    int result = add(x, y);

    // Printing the result
    cout << "Sum is: " << result << endl;

    return 0;
}
