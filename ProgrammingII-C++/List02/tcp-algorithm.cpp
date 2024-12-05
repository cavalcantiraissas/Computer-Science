/*
Federal University of Mato Grosso
Programming II || Professor Sandino
Student: Raissa Cavalcanti || May 16, 2024

Task: Create three functions: Reset, increment, and double. They return nothing and operate on a single variable.
Simulate a TCP algorithm (gradually increasing and returning to the initial value when a packet loss occurs).
Create a loop in the program where each iteration will simulate a second of a TCP transmission. The window starts at 1,
increments by 1 for the next five iterations, and if there is no loss, it doubles the window size until it reaches a maximum value (it should not exceed 100).
The loop should be limited to 100 iterations.
*/

#include <iostream>

void reset(int &window) {
    window = 1; 
}

void increment(int &window) {
    window++;
}

void doubleWindow(int &window) {
    if (window * 2 > 100) {
        window = window; // Prevent from exceeding the maximum value
    } else {
        window *= 2; 
    }
}

int main() {
    int window = 1; // Initial window size

    std::string output; // String to store output for each iteration

    int loss_times[] = {10, 23, 77}; // Time steps where packet loss occurs
    int loss_index = 0;

    for (int i = 1; i <= 100; ++i) {
        output.clear();

        output += std::to_string(i) + " | "; // Add the current second to the output

        // Check for packet loss at the specified times
        if (loss_index < 3 && i == loss_times[loss_index]) {
            output += "loss"; // Indicate packet loss
            reset(window); // Reset window size
            loss_index++; // Move to the next loss time
        } else {
            output += std::to_string(window); // Show the current window size
            if (window < 6) {
                increment(window); // Increment the window size if it is less than 6
            } else {
                doubleWindow(window); // Double the window size if it's 6 or more
            }
        }

        std::cout << output << std::endl; // Output the result for the current second
    }

    return 0;
}
