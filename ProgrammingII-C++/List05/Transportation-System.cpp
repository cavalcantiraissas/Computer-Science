/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti

Exercise FIVE
*/

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Transport {
public:
    virtual void start() const = 0; 
    virtual void stop() const = 0;  
    virtual ~Transport() {}          
};

class Car : public Transport {
public:
    void start() const override {
        cout << "The car is starting." << endl;
    }

    void stop() const override {
        cout << "The car is turning off." << endl;
    }
};

class Bicycle : public Transport {
public:
    void start() const override {
        cout << "The bicycle is starting to pedal." << endl;
    }

    void stop() const override {
        cout << "The bicycle is stopping pedaling." << endl;
    }
};

class Airplane : public Transport {
public:
    void start() const override {
        cout << "The airplane is taking off." << endl;
    }

    void stop() const override {
        cout << "The airplane is landing." << endl;
    }
};

int main() {
    vector<shared_ptr<Transport>> transports;
    transports.push_back(make_shared<Car>());
    transports.push_back(make_shared<Bicycle>());
    transports.push_back(make_shared<Airplane>());

    for (const auto& transport : transports) {
        transport->start();
        transport->stop();
        cout << endl;
    }

    return 0;
}
