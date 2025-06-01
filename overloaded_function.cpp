#include <iostream>
using namespace std;

// -------- FUNCTION OVERLOADING --------
// Same function name, different parameter types or count

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floats
float add(float a, float b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Add 2 integers: " << add(5, 10) << endl;          // calls int version
    cout << "Add 2 floats: " << add(2.5f, 3.5f) << endl;       // calls float version
    cout << "Add 3 integers: " << add(1, 2, 3) << endl;        // calls 3-parameter version

    return 0;
}
