n=int(input("Enter the n value:"))
n1=n
sum=0
while(n1!=0):
    sum=sum+(n1%10)
    n1=n1//10    
print(sum)
