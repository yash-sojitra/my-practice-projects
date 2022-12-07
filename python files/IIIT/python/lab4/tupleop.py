lang = ("python", "java", "c", "html", "css")

print(len(lang))

lang_check = input("enter the name of langugae to check whether it is stored in the tuple or not : \n")

for i in range(0, len(lang)):
    if lang[i] == lang_check:
        print("true\n")
        break

print(lang[1])