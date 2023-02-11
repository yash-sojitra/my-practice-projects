import time

# i = int(input('enter the number to calculate its factorial :'))
# j = 1
# result = 1

# while (i>=j):
#     result = result * j
#     j+=1

# print(result)

startTime = time.time()

def fact_rec(n):
    if n==0:
        return 1
    if n==1:
        return 1
    else:
        return n*fact_rec(n-1)

endTime = time.time()

print(" time taken : ", endTime-startTime)

print(fact_rec(100))