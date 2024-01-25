# Check if a number is palindrome

# Using number reverse
num = int(input("Enter a number: "))
temp = num
rev = 0
while temp > 0:
    rev = rev * 10 + temp % 10
    temp //= 10

if num == rev:
    print("Palindrome")
else:
    print("Not a Palindrome")


# Using for loop character comparison
num = input("Enter a number: ")

def isPalindrome(num):
    for i in range(len(num) // 2):
        if num[i] != num[len(num) - i - 1]:
            return False
    return True

if isPalindrome(num):
    print("Palindrome")
else:
    print("Not a Palindrome")


# Using string reverse
def isPalindrome(num):
    return num == num[::-1]

num = input("Enter a number: ")

if isPalindrome(num):
    print("Palindrome")
else:
    print("Not a Palindrome")
