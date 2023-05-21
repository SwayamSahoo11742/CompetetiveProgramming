def f(x, y):
    iteration = 0

    while True:
        if x > y:
            x, y = -y, -2 * x
        elif x < y:
            x, y = x - 4, y / 2
        elif x == 7 and x != y:
            y = 3
        elif x == y:
            x, y = y + 3, x - 3

        iteration += 1

        if(x == 7 and x != y):
            return iteration
        

x, y = -7, -11
r = f(x, y)
print(r)
