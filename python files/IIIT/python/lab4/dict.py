result = {"yash" : 90 , "utsav" : 90 , "hetansh" : 90 , "bhumil" :80}

print("\nwelcome to the result storage section.\n enter name and marks of student down.\n press Q/q to quit any time you want\n")

while True:
    st_Name = input("\n enter name of student here: \n")
    if st_Name == "q" or st_Name == "Q":
        break
    
    st_marks = input("enter marks of student here: \n")

    if(st_marks == "q" or st_marks == "q"):
        break
    else:
        result[st_Name] = int(st_marks)

print(result)