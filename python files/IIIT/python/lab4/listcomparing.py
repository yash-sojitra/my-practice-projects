x = [5,8,4,76,5,3,5,6,8,5,34,2,6,78,9]
y = [5,8,4,76,5,3,5,6,8,5,34,2,6,78,9]

ans = 0


if len(x) == len(y):
    for i in range(0,len(x)):
    
        if x[i] == y[i]:
            ans = 1
        else:
            ans = 0
            break
else:
    ans = 0


if ans:
    print("true")
else:
    print("false")
