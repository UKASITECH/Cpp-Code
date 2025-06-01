#include <iostream>
using namespace std;

// Define an enum for days of the week
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    Day today;

    // Assign a value to the enum variable
    today = WEDNESDAY;

    // Print the enum value (as integer)
    cout << "Today is day number: " << today << endl;

    // Use enum in a condition
    if (today == WEDNESDAY) {
        cout << "It's midweek!" << endl;
    }

    return 0;
}
