for x in range(30):
    for y in range(30-x):
        z = 30-y-x
        price = 3*x+2*y+z
        if price == 50:
            print(x,y,z)
            break