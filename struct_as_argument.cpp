#include <iostream>
using namespace std;

// Define the struct
struct Student {
    string name;
    int age;
    float marks;
};

// Pass struct by value (makes a copy)
void displayByValue(Student s) {
    cout << "\n[By Value] Name: " << s.name << ", Age: " << s.age << ", Marks: " << s.marks << endl;
}

// Pass struct by reference (no copy, changes will affect original)
void displayByReference(Student &s) {
    cout << "\n[By Reference] Name: " << s.name << ", Age: " << s.age << ", Marks: " << s.marks << endl;

    // Let's change something
    s.marks += 5;  // Adding bonus marks
}

// Pass struct as const reference (safe read-only)
void displayConstRef(const Student &s) {
    cout << "\n[Const Reference] Name: " << s.name << ", Age: " << s.age << ", Marks: " << s.marks << endl;
}

int main() {
    Student s1;

    // Input values
    cout << "Enter name: ";
    cin >> s1.name;

    cout << "Enter age: ";
    cin >> s1.age;

    cout << "Enter marks: ";
    cin >> s1.marks;

    // Call different functions
    displayByValue(s1);
    displayByReference(s1);  // This changes s1.marks
    displayConstRef(s1);     // Safe read-only

    cout << "\nUpdated Marks after reference call: " << s1.marks << endl;

    return 0;
}
