#include <iostream>
using namespace std;

// Pass by Value: function gets a copy, changes won't affect original
void passByValue(int x) {
    x = x + 10;
    cout << "Inside passByValue, x = " << x << endl;
}

// Pass by Reference: function gets original variable's address, changes affect original
void passByReference(int &x) {
    x = x + 10;
    cout << "Inside passByReference, x = " << x << endl;
}

int main() {
    int num = 5;

    cout << "Before passByValue: num = " << num << endl;
    passByValue(num);
    cout << "After passByValue: num = " << num << " (unchanged)" << endl;

    cout << "\nBefore passByReference: num = " << num << endl;
    passByReference(num);
    cout << "After passByReference: num = " << num << " (changed)" << endl;

    return 0;
}
