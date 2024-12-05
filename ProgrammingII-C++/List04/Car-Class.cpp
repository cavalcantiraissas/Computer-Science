/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti
*/

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int mileage;

public:
    Car(string b, string mod, int y, int km) : brand(b), model(mod), year(y), mileage(km) {}

    void setBrand(string b) { brand = b; }
    string getBrand() const { return brand; }

    void setModel(string mod) { model = mod; }
    string getModel() const { return model; }

    void setYear(int y) { year = y; }
    int getYear() const { return year; }

    void setMileage(int km) { mileage = km; }
    int getMileage() const { return mileage; }

    void drive(int km) {
        if (km > 0) {
            mileage += km;
        } else {
            cout << "Invalid mileage." << endl;
        }
    }

    void showData() const {
        cout << "Brand: " << brand << ", Model: " << model
             << ", Year: " << year << ", Mileage: " << mileage << endl;
    }
};

int main() {
    Car car1("Toyota", "Corolla", 2020, 15000);
    car1.showData(); // Brand: Toyota, Model: Corolla, Year: 2020, Mileage: 15000

    car1.drive(500);
    car1.showData(); // Brand: Toyota, Model: Corolla, Year: 2020, Mileage: 15500

    return 0;
}
