# Value of x in a quadratic equation

import math

print("Format of the equation: ax^2 + bx + c = 0")

a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))

print("The equation is: ", a, "x^2 + ", b, "x + ", c, " = 0")

d = b**2 - 4*a*c

if d < 0:
    print("No real roots")
elif d == 0:
    solution = (-b + math.sqrt(d)) / (2 * a)
    print("Solution is: ", -b / (2 * a))
else:
    solution1 = (-b + math.sqrt(d)) / (2 * a)
    solution2 = (-b - math.sqrt(d)) / (2 * a)
    print("First solution is: ", solution1)
    print("Second solution is: ", solution2)
