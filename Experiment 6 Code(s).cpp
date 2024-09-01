//Name:- Manas Gautam
//PRN:- 23070123081
//Branch:- E&Tc{B1}

//Experiment{6A}: - Print Numbers from 1 to the end value specified by the user.
#include <iostream>

int main() {
    int endValue;

    // Get the end value from the user
    std::cout << "Enter the end value: ";
    std::cin >> endValue;

    // Check if the input is a positive integer
    if (endValue <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Use a for loop to print numbers from 1 to endValue
    for (int i = 1; i <= endValue; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}

//Experiment{6B}: -Calculate the Sum of First ‘n’ Natural Numbers where ‘n’ is the value entered by the user

#include <iostream>

int main() {
    int n;
    int sum = 0;  // Variable to store the sum

    // Get the value of 'n' from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Check if the input is a positive integer
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of the first 'n' natural numbers using a for loop
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output the result
    std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;

    return 0;
}



//Experiment {6C}: - Print pattern of asterisk using loop

//Part 1: - Right triangle

#include <iostream>

int main() {
    int rows;

    // Get the number of rows for the pattern from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Print the right-angle triangle pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

//Part 2: - Pyramid

#include <iostream>

int main() {
    int height;

    // Get the height of the pyramid from the user
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> height;

    // Print the pyramid pattern
    for (int i = 1; i <= height; ++i) {
        // Print leading spaces
        for (int j = height; j > i; --j) {
            std::cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= (2 * i - 1); ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

//Experiment{6D}: - Print Numbers from 1 to the end value specified by the user using while loop

#include <iostream>

int main() {
    int endValue;

    // Get the end value from the user
    std::cout << "Enter the end value: ";
    std::cin >> endValue;

    // Check if the input is a positive integer
    if (endValue <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Initialize the counter
    int i = 1;

    // Use a while loop to print numbers from 1 to endValue
    while (i <= endValue) {
        std::cout << i << std::endl;
        ++i; // Increment the counter
    }

    return 0;
}

//Experiment{6E}: - Simple Password Validation using do while loop
#include <iostream>
#include <string> // For std::string

int main() {
    const std::string correctPassword = "sit"; // Predefined correct password
    std::string enteredPassword;
    bool isPasswordCorrect = false;

    do {
        // Prompt the user to enter the password
        std::cout << "Enter your password: ";
        std::cin >> enteredPassword;

        // Check if the entered password matches the correct password
        if (enteredPassword == correctPassword) {
            isPasswordCorrect = true;
            std::cout << "Password is correct. Access granted." << std::endl;
        } else {
            std::cout << "Incorrect password. Please try again." << std::endl;
        }
    } while (!isPasswordCorrect); // Continue looping until the correct password is entered

    return 0;
}

