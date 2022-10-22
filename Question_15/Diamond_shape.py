#Create Diamond Shape by Stars
loops = eval(input("Enter the number of loops: "))
for i in range(loops):      #Top half of the diamond
    print(" "*(loops-i-1) + "*"*(2*i+1)) #print spaces and stars
for i in range(loops-1):    #Bottom half of the diamond
    print(" "*(i+1) + "*"*(2*(loops-i-1)-1))    #print spaces and stars


