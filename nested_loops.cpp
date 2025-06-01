#include <iostream>
using namespace std;

int main() {
    // -------- NESTED LOOPS --------
    // A loop inside another loop
    // Commonly used for printing patterns or working with 2D data

    cout << "Nested loop example (printing a 3x3 grid):\n";

    for (int i = 1; i <= 3; i++) {             // Outer loop: rows
        for (int j = 1; j <= 3; j++) {         // Inner loop: columns
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;  // New line after each row
    }

    return 0;
}
