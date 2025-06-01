#include <iostream>
using namespace std;

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main() {
    using namespace first;
    using namespace second;
    // A namespace - provides a solution for preventing name conflicts in large projects. each entity needs a unique name.
    // A Namespace allows for identically named entities as long as the namespace are diffrent.
    int  x = 0;
    // int x = 1; error - because each entity wants a diffrent name
    cout << x; // output - 0
    cout <<"\n"<<first::x; // output  = 1 
    cout <<"\n" <<second::x; // output = 2

    // this is how we can use namespace in c++



    return 0;
}