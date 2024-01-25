# Swap Two Numbers

# Swapping two numbers using third variable
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print("Before swapping: ")
print("a = ", a, " b = ", b)

temp = a
a = b
b = temp

print("After swapping: ")
print("a = ", a, " b = ", b)


# Swapping two numbers without using third variable
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print("Before swapping: ")
print("a = ", a, " b = ", b)

a = a ^ b
b = a ^ b
a = a ^ b

print("After swapping: ")
print("a = ", a, " b = ", b)


# Swapping two numbers using tuple
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
print("Before swapping: ")

print("a = ", a, " b = ", b)

a, b = b, a

print("After swapping: ")
print("a = ", a, " b = ", b)
