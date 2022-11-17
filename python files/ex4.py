rows = int(input('enter number of rows: '))
design = int(input('input 0 or 1: '))

i=1


if (design == 1):
    while (i<=rows):
        j=1

        while (j<=i):
            print('*', end='')
            j=j+1

        print('\n', end='')
        i=i+1

elif(design == 0):
    while (i<=rows):
        j=5

        while (j>=i):
            print('*', end='')
            j=j-1

        print('\n', end='')
        i=i+1