a = int(input("enter value of first side: \n")) ** 2
b = int(input("enter value of second side: \n")) ** 2
c = int(input("enter value of third side: \n")) ** 2

if a == b + c or b == a + c or c == a + b:
    print("it's an right angle triangle")
else:
    print("it isn't an right angle triangle")
