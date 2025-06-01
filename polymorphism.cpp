#include <iostream>
using namespace std;

// --------- Compile-time polymorphism (Function Overloading) ----------
class Calculator {
public:
    // Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Add three integers (same function name, different parameters)
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

// --------- Run-time polymorphism (Virtual functions) ----------
class Animal {
public:
    virtual void sound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // Override base class function
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Compile-time polymorphism: function overloading
    Calculator calc;
    cout << "Add 2 numbers: " << calc.add(5, 7) << endl;
    cout << "Add 3 numbers: " << calc.add(1, 2, 3) << endl;

    // Run-time polymorphism: virtual function example
    Animal* animalPtr;

    Dog d;
    Cat c;

    animalPtr = &d;  // Point to Dog object
    animalPtr->sound();  // Calls Dog's sound()

    animalPtr = &c;  // Point to Cat object
    animalPtr->sound();  // Calls Cat's sound()

    return 0;
}
