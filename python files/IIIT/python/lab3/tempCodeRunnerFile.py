print("this program demonstrates logical & bitwise operators in python\n")

# bitwise operators

a = int(input("enter your first number : \n"))
b = int(input("enter your second number : \n"))

print("binary form of the given two numbers is: ")
print(bin(a))
print(bin(b))

print("\nbitwise AND operation on these two numbers is : \n", a&b)
print(bin(a&b), "\n")
print("\nbitwise OR operation on these two numbers is : \n", a|b)
print(bin(a|b), "\n")
print("\nbitwise ExOR operation on these two numbers is : \n", a^b)
print(bin(a^b), "\n")
print("\nbitwise complement operation on these two numbers is : \n", ~a)
print(bin(~a), "\n")
print("\nbitwise complement operation on these two numbers is : \n", ~b)
print(bin(~b), "\n")
print("\nbitwise right shift operation on these two numbers is : \n", a>>2)
print(bin(a>>2), "\n")
print("\nbitwise right shift operation on these two numbers is : \n", b>>2)
print(bin(b>>2), "\n")
print("\nbitwise left shift operation on these two numbers is : \n", a<<2)
print(bin(a<<2), "\n")
print("\nbitwise left shift operation on these two numbers is : \n", b<<2)
print(bin(b<<2), "\n")