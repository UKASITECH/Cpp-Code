#include <iostream>
using namespace std;

int main() {
    // -------- FOR LOOP --------
    // Syntax: for(initialization; condition; update)
    // Best when we know how many times to repeat
    cout << "For loop example:\n";
    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i;
    }

    // -------- WHILE LOOP --------
    // Syntax: while(condition) { ... }
    // Best when number of repetitions is unknown; checks condition before running
    cout << "\nWhile loop example:\n";
    int j = 1;
    while (j <= 5) {
        cout << "j = " << j;
        j++;
    }

    // -------- DO-WHILE LOOP --------
    // Syntax: do { ... } while(condition);
    // Runs the block at least once, checks condition after running
    cout << "\nDo-while loop example:\n";
    int k = 1;
    do {
        cout << "k = " << k;
        k++;
    } while (k <= 5);

    return 0;
}
