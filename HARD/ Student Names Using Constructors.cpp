#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    // Default constructor
    Student() : name("Unknown") {}

    // Parameterized constructor
    Student(string studentName) : name(studentName) {}

    // Method to display the name
    void display() const {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    Student student1; // No name provided
    Student student2("Alice"); // Name provided

    student1.display(); // Should print "Student Name: Unknown"
    student2.display(); // Should print "Student Name: Alice"

    return 0;
}
