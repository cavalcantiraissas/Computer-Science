#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, count = 0;
    float average = 0; // Changed to float to ensure precision in average calculation

    cout << "Let's calculate the arithmetic mean of some numbers. Enter 0 to finish." << endl;

    while (true) {
        cout << "Enter a number to add (0 to exit): ";
        cin >> N;

        if (N == 0) break; // Stops the loop if the value is 0

        sum += N; // Adds the entered number to the sum
        count += 1;  // Counts how many numbers have been entered
    }

    // Checks if at least one valid number was entered
    if (count > 0) {
        average = static_cast<float>(sum) / count; // Calculates the average
        cout << "You entered " << count << " numbers." << endl;
        cout << "Sum: " << sum << endl;
        cout << "Arithmetic mean: " << average << endl;
    } else {
        cout << "No valid numbers were entered." << endl;
    }

    return 0;
}
