#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    // Add element at end
    v.push_back(5);

    // Access element by index
    cout << v[2] << endl;  // Output: 3

    // Size of vector
    cout << v.size() << endl;

    return 0;
}
