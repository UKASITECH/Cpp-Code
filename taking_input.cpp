#include <iostream>
using namespace std;

int main() {
    // We can take input from the user using cin;
    // we use cout for output but for taking input we will use cin
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout <<"Hello, "<< name;

    int x,y;
    cout << "\nEnter a number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    int z = x+y;
    cout <<"The sum of number you entered is "<< z;
    return 0;
}