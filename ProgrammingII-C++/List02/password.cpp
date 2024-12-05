/*
Federal University of Mato Grosso
Programming II || Professor Sandino
Student: Raissa Cavalcanti || May 16, 2024

Activity: Write a program that asks the user to create a password that meets the following requirements:

-> At least two numbers
-> One special character
-> One uppercase letter
-> One lowercase letter

The output should indicate whether the chosen password is valid or, if not, which requirements are missing.
The program must continue until a valid password is created.
*/

#include <iostream>
using namespace std;

bool validate(const string& password) { 
    int numCount = 0; 
    bool hasSpecialChar = false;
    bool hasLowercase = false;
    bool hasUppercase = false;

    for (char c : password) { 
        if (isdigit(c)) { 
            numCount++;
        } else if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@') || 
                   (c >= '[' && c <= '`') || (c >= '{' && c <= '~')) { 
            hasSpecialChar = true;
        } else if (islower(c)) { 
            hasLowercase = true;
        } else if (isupper(c)) { 
            hasUppercase = true;
        }
    }

    if (numCount < 2) {
        cout << "Invalid password. You need at least two numbers." << endl;
    }
    if (!hasSpecialChar) {
        cout << "Invalid password. You need at least one special character." << endl;
    }
    if (!hasLowercase) {
        cout << "Invalid password. You need at least one lowercase letter." << endl;
    }
    if (!hasUppercase) {
        cout << "Invalid password. You need at least one uppercase letter." << endl;
    }

    return numCount >= 2 && hasSpecialChar && hasLowercase && hasUppercase;
}

int main() {
    string password;

    do {
        cout << "Enter a password: ";
        cin >> password;
        cout << endl;  

        if (validate(password)) {
            cout << "You entered a strong password. Password is valid!" << endl;
            break;
        } else {
            cout << "Invalid password. Please try again by entering a stronger password." << endl;
        }
    } while (true); 

    return 0;
}
