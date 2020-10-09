print("Enter 2 numbers in ascending order:")
n=int(input())
m=int(input())
print("Even numbers in the range including ",n," and ",m)
for i in range(n,m+1):
    if i%2==0:
        print(i)