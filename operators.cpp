#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operator - operators which helps in doing mathematical calculations 
    // arithmetic operators - + - * / % (modules operator - for remainders of divison)
    
    int x = 2;
    int y = 4;

    // add
    cout << x+y << "\n";

    // subtract 
    cout << y-x << "\n";

    // multiply
    cout << x*y << "\n";

    // divide 
    cout << y/x << "\n";
    return 0;

    //  Assignment operator - these are used to assign values :
    // = += -= *= /= %=
    int increment;
    increment += 13; // is also increment = increment +13;

    // comparison (relational) operator
    // ==(equals to) , !=(not equals to) , >(greater than), <(smaller than), >= (greater than or equal to), <= (less than or equals to)
    int a = 12;
    int b = 13;
    bool c = a>b; // output - false

    // logical operators
    // && (and), || (or), !(not)
    
    cout << increment;
}