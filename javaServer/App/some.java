import java.util.Scanner;

public class Calculator {
    // Function to calculate the square of a number
    public static int square(int num) {
        return num * num;
    }

    // Function to calculate the cube of a number
    public static int cube(int num) {
        return num * num * num;
    }

    // Function to calculate the factorial of a number
    public static int factorial(int num) {
        if (num == 0 || num == 1) {
            return 1;
        } else {
            return num * factorial(num - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Calculate square, cube, and factorial
        int numSquared = square(number);
        int numCubed = cube(number);
        int numFactorial = factorial(number);

        System.out.println("Number: " + number);
        System.out.println("Square: " + numSquared);
        System.out.println("Cube: " + numCubed);
        System.out.println("Factorial: " + numFactorial);

        System.out.print("Enter an integer x: ");
        int x = scanner.nextInt();
        System.out.print("Enter an integer y: ");
        int y = scanner.nextInt();
        System.out.print("Enter a string: ");
        String z = scanner.next();

        System.out.println("x: " + x);
        System.out.println("y: " + y);
        System.out.println("z: " + z);

        scanner.close();
    }
}
