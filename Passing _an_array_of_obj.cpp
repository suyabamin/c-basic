#include<iostream>
#include<string>
using namespace std;

class Car {
public:
    string name;
    int year;

    Car(string n = "", int y = 0) {
        name = n;
        year = y;
    }

    void display() {
        cout << "Car Name: " << name << ", Year: " << year << endl;
    }
};

void modifyCars(Car* cars, int size) {
    for (int i = 0; i < size; ++i) {
        cars[i].year += 1; // direct access now valid
    }
}

void displayCars(Car* cars, int size) {
    for (int i = 0; i < size; ++i) {
        cars[i].display();
    }
}

int main() {
    Car cars[3] = {
        Car("Toyota", 2010),
        Car("Honda", 2015),
        Car("Ford", 2020)
    };

    cout << "Cars before modification:\n";
    displayCars(cars, 3);

    modifyCars(cars, 3);

    cout << "\nCars after modification:\n";
    displayCars(cars, 3);

    return 0;
}
