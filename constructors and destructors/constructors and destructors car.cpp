#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Constructor with parameters
    Car(const std::string& carMake, const std::string& carModel, int carYear)
        : make(carMake), model(carModel), year(carYear) {}

    // Destructor (typically empty for basic data types)
    ~Car() {}

    // Getters
    const std::string& getMake() const { return make; }
    const std::string& getModel() const { return model; }
    int getYear() const { return year; }
};

int main() {
    Car myCar("Honda", "Civic", 2023);

    std::cout << "Make: " << myCar.getMake() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    return 0; // Added return statement
}
