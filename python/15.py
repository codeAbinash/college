# Prime or not

def is_prime(n):
    if n == 1:
        return False
    for i in range(2, n//2 + 1):
        if n % i == 0:
            return False
    return True


n = int(input("Enter a number: "))
if is_prime(n):
    print(f"{n} is Prime")
else:
    print(f"{n} Not Prime")
