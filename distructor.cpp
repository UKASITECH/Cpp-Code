#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    // Constructor: called when object is created
    Student(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor: called automatically when object is destroyed
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    // Creating object s1
    Student s1("Aarav");

    s1.display();

    // Object s1 goes out of scope here, destructor is called automatically
    return 0;
}
