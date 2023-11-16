# Function to calculate the square of a number
def square(num):
    return num * num

# Function to calculate the cube of a number
def cube(num):
    return num * num * num

# Function to calculate the factorial of a number
def factorial(num):
    if num == 0 or num == 1:
        return 1
    else:
        return num * factorial(num - 1)

if __name__ == "__main__":
    number = 5  # Change this to any number you want to perform calculations on

    # Calculate square, cube, and factorial
    numSquared = square(number)
    numCubed = cube(number)
    numFactorial = factorial(number)

    # Input from the user
    x = int(input("Enter an integer: "))
    y = int(input("Enter another integer: "))
    z = input("Enter a string: ")

    # Print the results
    print(f"Number: {number}")
    print(f"Square: {numSquared}")
    print(f"Cube: {numCubed}")
    print(f"Factorial: {numFactorial}")
    print(x)
    print(y)
    print(z)
