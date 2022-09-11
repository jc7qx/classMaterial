import turtle
import random

# print("hello")
win = turtle.Screen()

tk = turtle.Turtle()
turtle.colormode(255)
tk.width(3)
for a in range(36):
    r, g, b = random.randint(0, 255), random.randint(0, 255),random.randint(0, 255)
    #print(r, g, b)
    tk.color((r, g, b))

    tk.circle(50)
    tk.right(10)

win.exitonclick()