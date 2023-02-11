print("\nWelcome to a simple calculator\n here enter first number then operator and then second number\n here,\n '+' is for addition \n '-' is for subtraction \n '%' is for remainder function \n '*' is for multiplication \n '/' is for division \n '^' is for power function")

n1= float(input ('\nfirst number here----->'))
function = input ("\nfunction here----->")
n2= float(input('\nsecond number----->'))
ans = 0

if function == '+':
    ans = (n1)+(n2)

elif function == '-':
    ans = (n1)-(n2)

elif function == '%':
    ans = (n1)%(n2)

elif function == '*':
    ans = (n1)*(n2)

elif function == '/':
    ans = (n1)/(n2)

elif function == '^':
    ans = (n1)**(n2)

print("\nyour answer is ----> " , ans)