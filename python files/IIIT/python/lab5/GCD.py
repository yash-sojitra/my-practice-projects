a = int(input("Enter first number : \n"))
b = int(input("Enter second number : \n"))

smaller = 0

gcd = 0
if a>b:
    smaller = b
else:
    smaller = a

for i in range (1,a+1):
    if b%i ==0 and a%i == 0 :
        gcd =i

print("gcd of the two numbers is : \n", gcd)