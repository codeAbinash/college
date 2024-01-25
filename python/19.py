# Write a Program that takes a list of integers as input and does the following:
# Find the sum of all the elements in the list.
# Find average of all the elements in the list.


# Old school way
import functools


def sum(numbers):
    sum = 0
    for i in numbers:
        sum += i
    return sum


input_list = input("Enter a list of integers: ").split()
numbers = [int(i) for i in input_list]

sum = sum(numbers)
avg = sum / len(numbers)

print(f"Sum: {sum}")
print(f"Avg: {avg}")


# Advanced way
input_list = input("Enter a list of integers: ").split()
numbers = list(map(int, input_list))

sum = functools.reduce(lambda a, b: a + b, numbers)
avg = sum / len(numbers)

print(f"Sum: {sum}")
print(f"Avg: {avg}")
