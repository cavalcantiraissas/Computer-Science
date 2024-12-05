/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti
*/

#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(string name, double price, int quantity) 
        : name(name), price(price), quantity(quantity) {}

    void setName(string name) {
        this->name = name;
    }

    string getName() const {
        return name;
    }

    void setPrice(double price) {
        this->price = price;
    }

    double getPrice() const {
        return price;
    }

    void setQuantity(int quantity) {
        this->quantity = quantity;
    }

    int getQuantity() const {
        return quantity;
    }

    void addStock(int quantity) {
        this->quantity += quantity;
    }

    void removeStock(int quantity) {
        if (this->quantity >= quantity) {
            this->quantity -= quantity;
        } else {
            cout << "Insufficient stock." << endl;
        }
    }

    void showData() const {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Product product1("Laptop", 2500.0, 10);

    product1.showData();

    product1.addStock(5);
    product1.showData();

    product1.removeStock(3);
    product1.showData();

    product1.removeStock(20);
    product1.showData();

    return 0;
}
