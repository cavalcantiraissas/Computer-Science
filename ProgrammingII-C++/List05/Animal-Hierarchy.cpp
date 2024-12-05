/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti
*/

#include <iostream>
#include <vector>

using namespace std;

class Animal {
public:
    virtual void makeSound() const = 0; 
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "Moo" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    Cow cow;

    vector<Animal*> animals;
    animals.push_back(&dog);
    animals.push_back(&cat);
    animals.push_back(&cow);

    for (Animal* animal : animals) {
        animal->makeSound();
    }

    return 0;
}
