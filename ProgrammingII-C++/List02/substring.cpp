/*
Federal University of Mato Grosso
Programming II || Professor Sandino
Student: Raissa Cavalcanti || May 16, 2024

Task: Function to search for a substring within a string -
It returns true if the substring is found and the position where the substring begins.
*/

#include <iostream>
#include <string> 

using namespace std;

int main() {
    string str, substr; 

    cout << "Enter the string: ";
    getline(cin, str); 

    cout << "Enter the substring to search for: ";
    getline(cin, substr); 

    size_t pos = str.find(substr);

    if (pos != string::npos) { 
        cout << "Substring found at position: " << pos << " (zero-based index)" << endl;
    } else { 
        cout << "Substring not found." << endl;
    }

    return 0; 
}
