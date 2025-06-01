#include <iostream>
using namespace std;

// Define a struct (like a mini-class without functions)
struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    // Create a variable of type Student
    Student s1;

    // Take input for the struct fields
    cout << "Enter name: ";
    cin >> s1.name;

    cout << "Enter age: ";
    cin >> s1.age;

    cout << "Enter marks: ";
    cin >> s1.marks;

    // Print the student details
    cout << "\n--- Student Info ---" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
