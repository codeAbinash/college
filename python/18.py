# Write a Program that takes a list of integers as input and does the following:
# Find max and min element in the list.
# Find the sum of all the elements in the list.

# Old school way
def max_min_sum(numbers):
    max = numbers[0]
    min = numbers[0]
    sum = 0

    for i in numbers:
        if i > max:
            max = i
        if i < min:
            min = i
        sum += i

    return max, min, sum

input_list = input("Enter a list of integers: ").split()
numbers = [int(i) for i in input_list]
max, min, sum = max_min_sum(numbers)

print(f"Max: {max}")
print(f"Min: {min}")
print(f"Sum: {sum}")



# Advanced way
import functools

input_list = input("Enter a list of integers: ").split()
numbers = list(map(int, input_list))
sum = functools.reduce(lambda a, b: a + b, numbers)

print(f"Max: {max(numbers)}")
print(f"Min: {min(numbers)}")
print(f"Sum: {sum}")
