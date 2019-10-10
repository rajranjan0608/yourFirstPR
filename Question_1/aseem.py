def grtf(num1,num2,num3):
    if(num1<num2):
        if(num2<num3):
            print("The Greatest Is:",num3)
        else:
            print("The Greatest Is:",num2)
    elif(num1<num3):
        print("The Greatest Is:",num3)
    elif(num1 == num2 == num3):
        print("They Are Equal")
    else:
        print("The Greatest Is:",num1)


num1 = int(input("Enter The First Number:"))
num2 = int(input("Enter The Second Number:"))
num3 = int(input("Enter The Third Number:"))
grtf(num1,num2,num3)