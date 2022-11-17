from threading import Timer
from pygame import mixer
from datetime import datetime

def getDateTime():
    return datetime.now()

def reminder(thing):
    mixer.init()
    mixer.music.load(f'{thing}.mp3')
    mixer.music.set_volume(0.3)
    mixer.music.play()

    while True:
        print("------------------------------------------------------------------------------------")

        userInput = input("write 'done' to log: \n")
        
        if userInput == 'done':

            mixer.music.stop()
            print("logged in Successfully")
            file = open('log.txt', 'a+')

            if thing == 'Water':
                file.write('[ ' + str(getDateTime()) + ' ] ' + '200-ml Water\n')
                Water()

            elif thing == 'Eye':
                file.write('[ ' + str(getDateTime()) + ' ] ' + 'eye exercise\n')
                Eye()

            elif thing == 'Exercise':
                file.write('[ ' + str(getDateTime()) + ' ] ' + 'physical exercise\n')
                Exercise()


            file.close()
            break

i = 'Water'
j = 'Eye'
k = 'Exercise'

def timeDelayer(time, thing):
    t = Timer( time, reminder, [thing])
    t.start()

def Water():
    timeDelayer(10 , i)

def Exercise():
    timeDelayer(25 , j)

def Eye():
    timeDelayer(45 , k)

Water()
Exercise()
Eye()