#rock paper scissors game
#we
'''
step 1 : creating rounds
step 2 : player & computer score
step 3 : choice
step 4 : declare winner
'''
import random
rounds=int(input("enter ur rounds"))
choices=["rock","paper","scissors"]
 
while True:
 player_choice=input(f"enter {"rock"} {"paper"} {"scissors"} game")
 computer_choice=random.choice(choices)
 if player_choice==computer_choice:
  print("draw")
  
