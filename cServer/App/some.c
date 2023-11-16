#include <stdio.h>

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
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%s",z);

    // Print the results
    printf("Number: %d\n", number);
    printf("Square: %d\n", numSquared);
    printf("Cube: %d\n", numCubed);
    printf("Factorial: %d\n", numFactorial);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%s\n",z);

    return 0;
}
