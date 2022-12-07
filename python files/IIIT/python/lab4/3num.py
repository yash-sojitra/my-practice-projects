x = 67
y = 67
z = 30

if (x>y and x>z):
    print("x is greater than y and z")

elif (y>x and y>z):
    print("y is greater than x and z")

elif (z>x and z>y):
    print("z is greater than x and y")

elif (x==y and x>z):
    print("x and y are equal and greater than z")

elif (x==z and x>y):
    print("x and z are equal and greater than y")
    
elif (y==z and y>x):
    print("y and z are equal and greater than x")
    
else:
    print("all are equal")
