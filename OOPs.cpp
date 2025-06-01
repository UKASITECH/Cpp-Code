#include <iostream>
using namespace std;

// OOPs is Object Oriented Programming Language and it follows some things to improve you funcnality of code 
// oops follows a pricipal which is DRY - Do not repeat yourself 
// bacause oop want code reusablity and and you can do that by using classes , object, strucutres, functions and more...

// Define a class (like a blueprint)
class Student {
private:
    // Private data members (not accessible directly outside the class)
    string name;
    int age;
    float marks;

public: // can be accessed from main function
    // Setter function to set data (Encapsulation)
    void setData(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    // Getter/display function to show data
    void display() {
        cout << "\n--- Student Info ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Create object of class Student
    Student s1;

    // Set data using method
    s1.setData("Aarav", 14, 92.5);

    // Display data using method
    s1.display();

    return 0;
}
