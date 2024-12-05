#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int factorial = 1;

    for (; n > 1; n--) {
        factorial = factorial * n;
    }

    cout << "Factorial = " << factorial << endl;

    return 0;
}
