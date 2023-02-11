import time

startTime = time.time()

def fibonaci(number):
    if number== 1:
        return 0
    elif number == 2:
        return 1
    else:
        return fibonaci(number-1) + fibonaci(number-2)

print(fibonaci(40))

endTime = time.time()

print("\ntime taken: ", endTime-startTime)

# fib(3)  fib(2)+fib(1)
# 1     1   + 0

#4  fib(2) + fib(1) + fib(2)