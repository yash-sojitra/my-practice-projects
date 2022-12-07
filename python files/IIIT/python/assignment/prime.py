a = int(input("enter a number to know whether it is prime or not: "))

bool = False


for i in range(2,a):
    if a%i == 0:
        bool = True
        break

if bool:
    print(a," is not a prime number")
else:
    print(a," is a prime number")