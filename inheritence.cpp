#include <iostream>
using namespace std;

// Base class (Parent)
class Person {
protected:
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class (Child) inherits from Person
class Student : public Person {
private:
    float marks;

public:
    void setMarks(float m) {
        marks = m;
    }

    void displayStudent() {
        display();  // Call base class function
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setData("Aarav", 14);  // From base class
    s1.setMarks(90.5);        // From derived class

    s1.displayStudent();

    return 0;
}
