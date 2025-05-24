#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base class for Vehicle
class Vehicle {
protected:
    string brand;
    string model;
    bool engineStatus;

public:
    // Constructor
    Vehicle(string b, string m) : brand(b), model(m), engineStatus(false) {}

    // Virtual function for starting the engine
    virtual void startEngine() {
        engineStatus = true;
        cout << brand << " " << model << "'s engine started." << endl;
    }

    virtual void stopEngine() {
        engineStatus = false;
        cout << brand << " " << model << "'s engine stopped." << endl;
    }

    virtual void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    int seats;

public:
    Car(string b, string m, int s) : Vehicle(b, m), seats(s) {}

    void displayInfo() override {
        Vehicle::displayInfo();
        cout << "Seats: " << seats << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
private:
    string bikeType;

public:
    Bike(string b, string m, string t) : Vehicle(b, m), bikeType(t) {}

    void displayInfo() override {
        Vehicle::displayInfo();
        cout << "Bike Type: " << bikeType << endl;
    }
};

// Derived class Truck
class Truck : public Vehicle {
private:
    int capacity;

public:
    Truck(string b, string m, int c) : Vehicle(b, m), capacity(c) {}

    void displayInfo() override {
        Vehicle::displayInfo();
        cout << "Capacity: " << capacity << " tons" << endl;
    }
};

// Menu function to interact with the user
void displayMenu() {
    cout << "1. Add a Car" << endl;
    cout << "2. Add a Bike" << endl;
    cout << "3. Add a Truck" << endl;
    cout << "4. Display All Vehicles" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    vector<Vehicle*> vehicles; // To store all vehicles

    while (true) {
        displayMenu();
        int choice;
        cin >> choice;

        if (choice == 1) {
            string brand, model;
            int seats;
            cout << "Enter car brand: ";
            cin >> brand;
            cout << "Enter car model: ";
            cin >> model;
            cout << "Enter number of seats: ";
            cin >> seats;
            vehicles.push_back(new Car(brand, model, seats));
        } 
        else if (choice == 2) {
            string brand, model, type;
            cout << "Enter bike brand: ";
            cin >> brand;
            cout << "Enter bike model: ";
            cin >> model;
            cout << "Enter bike type (e.g., sports, cruiser): ";
            cin >> type;
            vehicles.push_back(new Bike(brand, model, type));
        } 
        else if (choice == 3) {
            string brand, model;
            int capacity;
            cout << "Enter truck brand: ";
            cin >> brand;
            cout << "Enter truck model: ";
            cin >> model;
            cout << "Enter truck capacity (in tons): ";
            cin >> capacity;
            vehicles.push_back(new Truck(brand, model, capacity));
        } 
        else if (choice == 4) {
            for (Vehicle* vehicle : vehicles) {
                vehicle->displayInfo();
                cout << "--------------------------" << endl;
            }
        } 
        else if (choice == 5) {
            cout << "Exiting program..." << endl;
            break;
        } 
        else {
            cout << "Invalid choice, please try again." << endl;
        }
    }

    // Free dynamically allocated memory
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}
