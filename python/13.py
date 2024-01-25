# Factorial of a number

def factorial(num):
    fact = 1
    for i in range(1, num + 1):
        fact *= i
    return fact

num = int(input("Enter a number: "))

if num < 0:
    print("Factorial of a negative number doesn't exist")
else:
    print("Factorial of", num, "is", factorial(num))
