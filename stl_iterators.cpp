#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";  // Dereference iterator
    }
    cout << endl;

    return 0;
}
