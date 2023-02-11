arr = [1,4,2,5,2,6,3,"yash"]

#shallow copy

print("in shallow copy both the arrays are affected. \n")
arr1 = arr
arr1.append(6)
print("array1 : ",arr)
print("array2 : ",arr1)


#deep copy
arr2 = arr.copy()
arr2.append(5)
print("in deep copy only the copied array is affected. \n")
print("array1 : ",arr)
print("array2 : ",arr2)

