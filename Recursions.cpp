#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: stop when n == 0 or 1
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);  // Call recursive function
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
