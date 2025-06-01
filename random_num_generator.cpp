#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    // -------- RANDOM NUMBER GENERATOR --------
    // srand(time(0)) sets random seed (changes every second)
    // rand() gives a random number

    srand(time(0)); // Seed the random number generator

    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1; // %100 gives 0-99, +1 shifts to 1-100

    cout << "Random number between 1 and 100: " << randomNumber << endl;

    return 0;
}
