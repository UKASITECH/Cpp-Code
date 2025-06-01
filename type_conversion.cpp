#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!\n";
    // type conversion is a value of one data to another 
    // implict = automatic
    // explict = precode vaue with new type(int)

    double x = (int) 3.14; // output - 3
    cout << x << "\n";
    int y = 100;
    cout << (char) y;

    char a = 'A';
    cout <<"\n"<< (int) a;
    return 0;
}