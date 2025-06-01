#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Inline setter
    void setName(const string& n) { name = n; }

    // Inline getter (const because it does not modify anything)
    string getName() const { return name; }

    void setAge(int a) {
        if (a > 0) age = a;
        else cout << "Invalid age!" << endl;
    }
    int getAge() const { return age; }

    void setMarks(float m) {
        if (m >= 0 && m <= 100) marks = m;
        else cout << "Invalid marks!" << endl;
    }
    float getMarks() const { return marks; }
};

int main() {
    Student s1;
    s1.setName("Aarav");
    s1.setAge(14);
    s1.setMarks(92.5);

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}
