n=36

i = 9

while(i>0):

    guess = int(input('guess the number : \n'))

    if guess > n:
        print('\nguessed number is greater than the actual number \n')
    elif guess < n:
        print('\nguessed number is smaller than the actual number \n')
    else:
        print(str(guess) + " is the right number.")
        break

    i = i - 1

    print('\nno of guesses remaining: ' + str(i) + "\n")

print('\nyou took ' + str(10-i) + ' guess')