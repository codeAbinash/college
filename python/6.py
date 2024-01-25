# Grade System

print("Enter Marks of the following subjects.")
subjects = ["English", "Maths", "Physics", "Chemistry", "Computer Science"]

total = 0
for subject in subjects:
    marks = int(input(subject + ": "))
    total += marks

average = total / len(subjects)

if average < 20:
    print("You Failed")
elif average >= 20 and average < 40:
    print("Grade D")
elif average >= 40 and average < 60:
    print("Grade C")
elif average >= 60 and average < 80:
    print("Grade B")
elif average >= 80 and average < 100:
    print("Grade A")
else:
    print("Invalid Marks")
