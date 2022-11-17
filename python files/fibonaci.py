def fibonaci(number):
    if number== 1:
        return 0
    elif number == 2:
        return 1
    else:
        return fibonaci(number-1) + fibonaci(number-2)

print(fibonaci(9))