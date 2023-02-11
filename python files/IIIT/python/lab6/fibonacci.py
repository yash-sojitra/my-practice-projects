a = 0 
b = 1

for i in range(1, 101):
    if i == 1:
        print(a)
    elif i == 2:
        print(b)
    elif i >2:
        c = a+b
        print(c)
        temp = b
        b =c
        a =temp