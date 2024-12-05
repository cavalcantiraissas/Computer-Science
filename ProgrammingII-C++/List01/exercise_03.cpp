#include <iostream>
using namespace std;

int main() {
    int i, num, square;

    square = 0;

    cout << "Enter a number: " << endl; 
    cin >> num; 

    cout << "The first " << num << " square numbers are: " << endl;

    for (i = 0; i <= num; i++) { 
        square = (i * i);
        cout << square << " ";
    }

    cout << endl;

    return 0;
}
