import math
import cmath

a = float(input("Enter a number between 0 to 1 : \n"))

print("\nacos(a) = ", math.acos(a))
print("ceiling value = ", math.ceil(a))
print("exponent = ", math.exp(a))
print("tan(x) = ", cmath.tan(a))
print("log10 = ", cmath.log10(a))
print("closer to 0.6 = ", cmath.isclose(a, 0.6))

#gcd
b = int(input("\nEnter a number : \n"))
c = int(input("Enter a number : \n"))

print("\nGCD of",b,",",c," = ",math.gcd(b, c))
