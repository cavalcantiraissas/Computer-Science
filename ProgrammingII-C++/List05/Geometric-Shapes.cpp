/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() const = 0; 
    virtual ~Shape() {}              
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));
    shapes.push_back(new Triangle(4.0, 5.0));

    for (Shape* shape : shapes) {
        cout << "Area: " << shape->area() << endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
