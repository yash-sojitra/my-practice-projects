list = [1,3,5,3,9,1,30]

for i in range(len(list)):
    for j in range(i+1,len(list)):
        if list[i] == list[j]:
            print(list[i])