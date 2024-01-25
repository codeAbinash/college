# Number Guessing Game

import random
import math

lower = int(input("Enter Lower bound: "))
upper = int(input("Enter Upper bound: "))

x = random.randint(lower, upper)
chances = round(math.log(upper - lower + 1, 2))
count = 0

print(f"\nYou've only {chances} chances to guess the number!\n")

while count < chances:
    count += 1
    guess = int(input("Guess a number: "))
    if x == guess:
        print(f"Congratulations you did it in {count} try")
        break
    elif x > guess:
        print("You guessed too small!")
    elif x < guess:
        print("You Guessed too high!")

if count >= chances:
    print(f"The number is {x}")
    print("Better luck next time!")
