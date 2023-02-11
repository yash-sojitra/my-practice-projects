a  =input("Enter a string with vowels : \n")
b= "aeiouAEIOU"

count = 0

for i in range(len(a)):
    for j in range(len(b)):
        if a[i] == b[j]:
            count+=1

print("no of vowels are : \n" , count)