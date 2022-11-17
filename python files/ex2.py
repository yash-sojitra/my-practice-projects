var1 = float(input("insert your first number :"))
op = input("insert your 5 fuction : ")
var2 = float(input("insert your second number :"))

ans = 0

if var1==45 and var2==3 and op=='*':
    ans=555

elif var1==56 and var2==9 and op=='+':
    ans=77

elif var1==56 and var2==6 and op=='/':
    ans=4

elif op=='+':
    ans = var1 + var2

elif op=='-': 
    ans = var1 - var2

elif op=='*':
    ans = var1 * var2

elif op=='/':
    ans = var1 / var2

else:
    print('provide valid operator')

print(ans)