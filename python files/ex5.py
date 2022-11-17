action = int(input('press 1 for log and press 2 for retrive: '))
client = int(input('choose 1 for harry, 2 for rohan, 3 for hammad: '))
record = int(input('choose 1 for diet, 2 for exercise: '))

def getDate():

    """ fuction to get date and time"""

    import datetime
    return datetime.datetime.now()

def log():
    if (client == 1 and record == 1):
        file = open("harryDiet.txt", "a+")

    elif (client == 1 and record == 2):
        file = open('harryExercise.txt', 'a+')

    elif (client == 2 and record == 1):
        file = open('rohanDiet.txt', 'a+')

    elif (client == 2 and record == 2):
        file = open('rohanExercise.txt', 'a+')

    elif (client == 3 and record == 1):
        file = open('hammadDiet.txt', 'a+')

    elif (client == 3 and record == 2):
        file = open('hammadExercise.txt', 'a+')
    
    else:
        print('give valid input')

    if (record == 1):
        food = input('write the food that you have taken: ')
        file.write('\n[ ' + str(getDate()) + ' ] ' + food)

    if (record == 2):
        exercise = input('write the exercise that you have done: ')
        file.write('\n[ ' + str(getDate()) + ' ] ' + exercise)

    file.close()

def retrive():
    if (client == 1 and record == 1):
        file = open("harryDiet.txt")

    elif (client == 1 and record == 2):
        file = open('harryExercise.txt')

    elif (client == 2 and record == 1):
        file = open('rohanDiet.txt')

    elif (client == 2 and record == 2):
        file = open('rohanExercise.txt')

    elif (client == 3 and record == 1):
        file = open('hammadDiet.txt')

    elif (client == 3 and record == 2):
        file = open('hammadExercise.txt')
    
    else:
        print('give valid input')

    i = file.readlines()

    for j in range(len(i)):
        print(i[j])

if action == 1:
    log()
elif action == 2:
    retrive()