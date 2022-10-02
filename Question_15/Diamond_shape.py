#Create Diamond Shape by Stars
loops = eval(input("Enter the number of loops: "))
for i in range(loops):      #Top half of the diamond
    print(" "*(loops-i-1) + "*"*(2*i+1)) #print spaces and stars
for i in range(loops-1):    #Bottom half of the diamond
    print(" "*(i+1) + "*"*(2*(loops-i-1)-1))    #print spaces and stars





# Create Diamond Shape
# import turtle

# def draw_diamond(turtle):
#     angle =31.6
#     while angle < 250:
#         turtle.forward(angle)
#         turtle.right(angle)
#         angle += 1

# def main():
#     window = turtle.Screen()
#     window.bgcolor("white")
#     brad = turtle.Turtle()
#     brad.shape("turtle")
#     brad.color("black")
#     brad.speed(50)
#     draw_diamond(brad)
#     window.exitonclick()

# if __name__ == '__main__':
#     main()
