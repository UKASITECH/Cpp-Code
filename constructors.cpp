#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // ✅ Default constructor (no arguments)
    Student() {
        name = "Unknown";
        age = 0;
        marks = 0.0;
    }

    // ✅ Parameterized constructor (with arguments)
    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    // ✅ Constructor overloading (different number/type of parameters)
    Student(string n) {
        name = n;
        age = 14;
        marks = 75.0;
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Info ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // 🔹 Using default constructor
    Student s1;
    s1.display();

    // 🔹 Using parameterized constructor
    Student s2("Aarav", 14, 88.5);
    s2.display();

    // 🔹 Using overloaded constructor (one string parameter)
    Student s3("Riya");
    s3.display();

    return 0;
}
