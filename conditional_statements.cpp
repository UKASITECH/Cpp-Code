#include <iostream>
using namespace std;

int main() {
    // conditional statements are those statements which are used to make condtions and take desisions in program
    // there are 2 types of C.S. - if-else and elif if clause
    int x,y;
    x = 10;
    y = 15;
    if (x >= y)
    {
        cout << "Umang is great";
    } else
    {
        cout << "Umang is funny";
    }
    
    // elif if clause
    if (x == y)
    {
        cout << "equal";
    } else if (y >= x)
    {
        cout << "y is greater";
    } else if (x>= y)
    {
        cout << "X is greater";
    } else
    {
        cout << "Nothing is good now";
    }
    
    
    
    
    return 0;
}