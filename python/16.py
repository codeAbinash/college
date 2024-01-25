# Multiplication table

def multiplication_table(n):
    for i in range(1, 11):
        print(f"{n} x {i} = {n*i}")

n = int(input("Enter a number: "))
multiplication_table(n)

