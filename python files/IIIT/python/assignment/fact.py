a = int(input("enter a number to calculate its factorial : "))
fact = 1

for i in range(1,a+1):
    fact = fact*i
    print(fact)

print("the factorial of a is : ", fact)