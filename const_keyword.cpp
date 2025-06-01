#include <iostream>
using namespace std;

int main() {
    // const keyword specifies that a value is constant value is constant
    // tells the compiler to prevennt anything from modifying it...
    // (read-only)

    const double pi = 3.14159;
    // pi = 2.2;  - will show error because the pi cannot be modified because it is ni const
    double radius  = 10;
    double circumference = 2 * pi * radius;
    cout << circumference << "cm";

    return 0;
}