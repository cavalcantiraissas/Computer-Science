/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti
*/

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Employee {
public:
    virtual double getMonthlySalary() const = 0; 
    virtual void printDetails() const = 0;   
    virtual ~Employee() {}                     
};

class SalariedEmployee : public Employee {
private:
    double monthlySalary;
public:
    SalariedEmployee(double salary) : monthlySalary(salary) {}

    double getMonthlySalary() const override {
        return monthlySalary;
    }

    void printDetails() const override {
        cout << "Salaried Employee, Monthly Salary: " << monthlySalary << endl;
    }
};

class HourlyEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyRate;
public:
    HourlyEmployee(double hours, double rate)
        : hoursWorked(hours), hourlyRate(rate) {}

    double getMonthlySalary() const override {
        return hoursWorked * hourlyRate;
    }

    void printDetails() const override {
        cout << "Hourly Employee, Hours Worked: " << hoursWorked
             << ", Hourly Rate: " << hourlyRate << endl;
    }
};

int main() {
    vector<shared_ptr<Employee>> employees;
    employees.push_back(make_shared<SalariedEmployee>(3000.00));
    employees.push_back(make_shared<HourlyEmployee>(160, 25.00));

    for (const auto& employee : employees) {
        employee->printDetails();
        cout << "Monthly Salary: " << employee->getMonthlySalary() << endl;
    }

    return 0;
}
