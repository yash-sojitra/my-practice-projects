arr = [1, 5, 3, 5, 3, 8, 5, 7, 6]
rep = []

for i in range(0, len(arr)):

    for j in range(i + 1, len(arr)):

        if arr[i] == arr[j]:

            if arr[j] not in rep:

                rep.append(arr[j])
                

for i in range(0, len(rep)):
    print(rep[i])