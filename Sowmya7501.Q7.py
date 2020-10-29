a=int(input("Enter number 1:"))
b=int(input("Enter number 2:"))
i=1
while(i<=a and i<=b):
    if(a%i==0 and b%i==0):
        gcd=i
    i=i+1
print("The greatest common divisor is:",gcd)
