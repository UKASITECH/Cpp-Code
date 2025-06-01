#include <iostream>
using namespace std;

int main() {
    // switch statemnt is used to take multiple desions and run a block of code with diffrent or so many conditions
    
    cout << "Hello, World!\n";
    int x;
    cout<< "Enter Secret Code: ";
    cin >> x;

    switch (x)
    {
    case 1234:
        cout << "Welcome, Umang";
        break;
    case 1342:
        cout << "Hello, Mukesh Ambani";
        break;
    case 1243:
        cout << "Hello, suresh";
        break;    
    default:
        break;
    }
    return 0;
}