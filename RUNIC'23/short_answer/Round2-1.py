def f(x, y):
    iteration = 0

    while True:
        if x > y:
            tx = x
            x = -y
            y = -2 * tx

        elif x < y:
            x -= 4
            y /= 2

        elif x == 7 and x!=y:
            y = 3
            

        elif x == y:
            tx=x
            x = y + 3
            y = tx - 3

        print(f"ITERATION:{iteration}||||x:{x} y:{y}")
        iteration += 1
        if(iteration == 7):
            break
        

    return iteration
        

x, y = -7, -11
r = f(x, y)
print(r)
