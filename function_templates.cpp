#include <iostream>
using namespace std;

// Function Template
// T is a placeholder for any data type (int, float, etc.)
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using add() with int
    cout << "Sum (int): " << add(5, 10) << endl;

    // Using add() with float
    cout << "Sum (float): " << add(2.5f, 3.7f) << endl;

    // Using add() with double
    cout << "Sum (double): " << add(1.23, 4.56) << endl;

    // Using add() with char (adds ASCII values)
    cout << "Sum (char as int): " << add('A', 'B') << endl;

    return 0;
}
