def value_change(x):
    print("this is original x",id(x))
    x=x+50
    print("this is new x",id(x))
    print("value of x inside this function: ",x)

x = 10
print("value of x before calling function",x)
print("this is main x",id(x))
value_change(x)
print("this is main x after calling function",id(x))
print("value of x after calling function",x)