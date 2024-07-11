#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string studentID;

public:
    // Constructor
    Student(const std::string& studentName, int studentAge, const std::string& studentID)
        : name(studentName), age(studentAge), studentID(studentID) {
        std::cout << "Student " << name << " with ID " << studentID << " created." << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Student " << name << " with ID " << studentID << " destroyed." << std::endl;
    }

    // Getters (optional)
    const std::string& getName() const { return name; }
    int getAge() const { return age; }
    const std::string& getStudentID() const { return studentID; }
};

int main() {
    Student myStudent("John Doe", 20, "S12345");
    return 0;
}
