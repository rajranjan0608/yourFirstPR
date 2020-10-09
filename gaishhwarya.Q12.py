print("Enter number:")
n=int(input())
count=0
print("Number of digits in ",n)
while n>0:
    count+=1
    n//=10
print(count)    
