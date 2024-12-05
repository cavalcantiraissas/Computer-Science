/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti

Exercise THREE
*/

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string accountHolder;

public:
    BankAccount(string n, double s, string t) : accountNumber(n), balance(s), accountHolder(t) {}

    void setAccountNumber(string n) { accountNumber = n; }
    string getAccountNumber() const { return accountNumber; }

    void setBalance(double s) { balance = s; }
    double getBalance() const { return balance; }

    void setAccountHolder(string t) { accountHolder = t; }
    string getAccountHolder() const { return accountHolder; }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance or invalid withdrawal amount." << endl;
        }
    }

    void showData() const {
        cout << "Account: " << accountNumber << ", Account Holder: " << accountHolder
             << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount c1("12345-6", 1000.0, "Joao Silva");
    c1.showData(); // Account: 12345-6, Account Holder: Joao Silva, Balance: 1000

    c1.deposit(500.0);
    c1.withdraw(300.0);
    c1.showData(); // Account: 12345-6, Account Holder: Joao Silva, Balance: 1200

    return 0;
}
