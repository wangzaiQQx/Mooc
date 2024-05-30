x=3
a = 1
n = 0

def fun(x, a = 1):
    for n in range(1,x+1):
        a *= n
    return a

while abs(a)>0.00001:
    a = (-1)**n * x**(2*n+1) / fun(2*n+1)
    b = x**(2*n+1)
    c = fun(2*n+1)
    n += 1
    print(a,b,c)