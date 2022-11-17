while(True):
    i = int(input('type in a number :'))
    if i<100:
        print('try again')
        continue
    else:
        print('you have succesfully entered a number greater than or equal to 100')    
        break
