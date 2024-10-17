print("Game:Guess the Number")
def game_starter():
 a=input("Do you want to start the game? (Y/N):")
 if a=="Y":
    print("starting game in ....")
    for i in range(3,-1,-1):
        print(i)
 elif a=="y":
    print("starting game in ....")
    for i in range(3,-1,-1):
        print(i)
 elif a=="N":
    print("Game ends.")
 elif a=="n":
    print("Game ends.")
 else:
    game_starter()

import random


p=input("choose type of number:\nOPTIONS:\n1) int\n2) float\n")


def game():
 print("GAME DETIALS \nNumber Type: Integer. \nRange:(0,11)\n")
 while True:
    target=random.randint(0,11)
    for i in range(1,10):
      
     
      x=float(input(f"try {i},enter the number: "))
      i+=1
      if x==target:
        print("Congrats 🎉 🎉 🎉 \nYOU WON. ")
        break
      
      else:
        print("UH UH!!! 😭 \nTRY AGAIN OR QUIT LOSER.")
        game()
    
if p=="int":
    game()
else:
    print("OOPS!!! 😔 Selected Game is unavailable at the moment.")
   