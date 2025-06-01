#include <iostream>
using namespace std;

int main() {
    // -------- BREAK --------
    // break; exits the loop immediately
    cout << "Break example:\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            // when i is 5, exit the loop
            break;
        }
        cout << "i = " << i << endl;
    }

    // -------- CONTINUE --------
    // continue; skips the current loop iteration
    cout << "\nContinue example:\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            // when i is 5, skip printing
            continue;
        }
        cout << "i = " << i << endl;
    }

    return 0;
}
