a  =input("Enter a string with puctuations : \n")
b= ".,;:'/\<>?\{\}[]!@#$%^&*()_+=-`~\""

c = ""

for i in a:
    if i not in b:
        c = c + i

print(c)