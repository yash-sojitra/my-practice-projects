
def calculator():
    print("SIMPLE CALCULATOR \n\n1. for addition \n2. for subtraction \n3. for multiplication \n4. for division")
    
    while True:
        op = int(input("Enter the number of function you want :\n"))

        n1 = int(input("Enter the first number : \n"))
        n2 = int(input("Enter the second number : \n"))

        print("your answer is :")
        if op == 1:
           print(n1+n2)
        elif op == 2:
            print(n1-n2)
        elif op == 3:
            print(n1*n2)
        elif op == 4:
            print(n1/n2)
        else:
            print("Invalid operation")

        choice = input("do you want to continue? (y/n): \n")
        if(choice == 'y' or choice == 'Y'):
            break

calculator()

