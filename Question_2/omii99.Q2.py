num = int(input("Enter a number"))

if num == 0:
    print("Enter a valid number")
elif(num % 2) == 0:
    print(f"{num} is an even number")
else:
    print(f"{num} is an odd number")