#include <iostream>
#include <string>
using namespace std;

// Vehicle Class (Superclass)
class Vehicle {
protected:
    string vehicleModel;
    string registrationNumber;
    double vehicleSpeed;
    double fuelCapacity;
    double fuelConsumption;

public:
    // Parameterized constructor
    Vehicle(string model, string regNumber, double speed, double capacity, double consumption)
        : vehicleModel(model), registrationNumber(regNumber), vehicleSpeed(speed), fuelCapacity(capacity), fuelConsumption(consumption) {}

    // Getters and Setters
    string getVehicleModel() const { return vehicleModel; }
    void setVehicleModel(string model) { vehicleModel = model; }

    string getRegistrationNumber() const { return registrationNumber; }
    void setRegistrationNumber(string regNumber) { registrationNumber = regNumber; }

    double getVehicleSpeed() const { return vehicleSpeed; }
    void setVehicleSpeed(double speed) { vehicleSpeed = speed; }

    double getFuelCapacity() const { return fuelCapacity; }
    void setFuelCapacity(double capacity) { fuelCapacity = capacity; }

    double getFuelConsumption() const { return fuelConsumption; }
    void setFuelConsumption(double consumption) { fuelConsumption = consumption; }

    // Method to calculate fuel needed for a given distance
    double fuelNeeded(double distance) const {
        return distance / fuelConsumption;
    }

    // Method to calculate distance covered in a given time
    double distanceCovered(double time) const {
        return vehicleSpeed * time;
    }

    // Method to display vehicle information
    virtual void display() const {
        cout << "Vehicle Model: " << vehicleModel << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Vehicle Speed: " << vehicleSpeed << " km/h" << endl;
        cout << "Fuel Capacity: " << fuelCapacity << " liters" << endl;
        cout << "Fuel Consumption: " << fuelConsumption << " km/l" << endl;
    }
};

// Bus Class (Subclass)
class Bus : public Vehicle {
public:
    Bus(string model, string regNumber, double speed, double capacity, double consumption)
        : Vehicle(model, regNumber, speed, capacity, consumption) {}

    void display() const override {
        cout << "Bus Details:" << endl;
        Vehicle::display();
    }
};

// Truck Class (Subclass)
class Truck : public Vehicle {
public:
    Truck(string model, string regNumber, double speed, double capacity, double consumption)
        : Vehicle(model, regNumber, speed, capacity, consumption) {}

    void display() const override {
        cout << "Truck Details:" << endl;
        Vehicle::display();
    }
};

// Transport Class (Driver Class)
class Transport {
public:
    static void main() {
        Bus bus("Volvo", "B1234", 80, 200, 5);
        Truck truck("Scania", "T5678", 60, 300, 3);

        bus.display();
        cout << "Fuel needed for 100 km: " << bus.fuelNeeded(100) << " liters" << endl;
        cout << "Distance covered in 2 hours: " << bus.distanceCovered(2) << " km" << endl;

        cout << endl;

        truck.display();
        cout << "Fuel needed for 100 km: " << truck.fuelNeeded(100) << " liters" << endl;
        cout << "Distance covered in 2 hours: " << truck.distanceCovered(2) << " km" << endl;
    }
};

int main() {
    Transport::main();
    return 0;
}
