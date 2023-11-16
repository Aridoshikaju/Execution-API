#include <iostream>  // Include the C++ standard I/O library

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

// Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int number = 5; // Change this to any number you want to perform calculations on

    // Calculate square, cube, and factorial
    int numSquared = square(number);
    int numCubed = cube(number);
    int numFactorial = factorial(number);
    int x;
    int y;
    char z[15];

    std::cin >> x;  // Use cin for input in C++
    std::cin >> y;
    std::cin >> z;

    // Print the results using cout for output in C++
    std::cout << "Number: " << number << std::endl;
    std::cout << "Square: " << numSquared << std::endl;
    std::cout << "Cube: " << numCubed << std::endl;
    std::cout << "Factorial: " << numFactorial << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    return 0;
}
