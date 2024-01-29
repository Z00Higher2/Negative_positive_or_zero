#This program prits out the Negative , Positive or Zero by the user Input

integer_1 = int(input("Enter a number: "))

if integer_1 < 0:
    print("NEgative integer")
elif integer_1 > 0:
    print("Positive integer")
else:
    print("Zero")