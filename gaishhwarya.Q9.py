print("Enter 2 numbers in ascending order:")
n=int(input())
m=int(input())
print("Odd numbers in the range excluding ",n," and ",m)
for i in range(n+1,m):
    if i%2!=0:
        print(i)