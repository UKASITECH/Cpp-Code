#include <iostream>
#include <vector>
#include <algorithm>  // algorithms here
using namespace std;

int main() {
    vector<int> v = {4, 2, 5, 1, 3};

    sort(v.begin(), v.end());  // Sort vector

    for (int x : v) cout << x << " ";  // Output: 1 2 3 4 5
    cout << endl;

    // Find element 3
    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end()) cout << "Found 3 at position " << (it - v.begin()) << endl;

    return 0;
}
