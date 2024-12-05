#include <iostream>
using namespace std;

int main() {
    int i, sum, num;

    sum = 0;

    cout << "Enter a number: " << endl; 
    cin >> num; // Receives the number from the user

    for (i = 0; i < num; i++) { 
        if (i % 2 == 0) {  
            sum += i; 
            cout << "Current sum = " << sum << endl; // Displays the running sum
        } 
    }

    cout << "Total sum of the first " << num << " even numbers: " << sum << endl;

    return 0;
}
