a = int(input("Enter a number : \n"))
b = a
sum = 0

while b>0:
    digit = b % 10
    sum = sum + digit**3
    b = b // 10

if sum == a:
    print("It's an armstrong number")
else:
    print("It isn't an armstrong number")