#include <iostream>

int main() {
    // Declare variables to store user input
    double num1, num2;

    // Get user input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform a simple calculation
    double sum = num1 + num2;

    // Display the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}
