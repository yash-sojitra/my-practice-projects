import random

options = ['snake', 'water', 'gun']

i = 1
compWin = 0
playerWin = 0

def game():

    global compWin
    global playerWin

    computer = random.choice(options)
    playerInput = input('play: ')

    if (computer == 'snake' and playerInput == 's'):
        print("It's a tie")
    elif (computer == 'water' and playerInput == 'w'):
        print("It's a tie")
    elif (computer == 'gun' and playerInput == 'g'):
        print("It's a tie")
    elif (computer == 'snake' and playerInput == 'w'):
        print('computer wins')
        compWin =+ 1
    elif (computer == 'snake' and playerInput == 'g'):
        print('player wins')
        playerWin =+ 1
    elif (computer == 'water' and playerInput == 'g'):
        print('computer wins')
        compWin =+ 1
    elif (computer == 'water' and playerInput == 's'):
        print('player wins')
        playerWin =+ 1
    elif (computer == 'gun' and playerInput == 's'):
        print('computer wins')
        compWin =+ 1
    elif (computer == 'gun' and playerInput == 'w'):
        print('player wins')
        playerWin =+ 1
        

def playerCompare():
    if compWin > playerWin:
        print(f'\ncomputer wins with {compWin} wins')
    elif compWin < playerWin:
        print(f'\nplayer wins with {playerWin} wins')
    else:
        print("\nIt's a tie")

print('welcome to the game of snake water gun!\n\npress s for snake, w for water, g for gun\n\nhave fun!\n')

for i in range(10):
    game()
    i = i + 1

playerCompare()

