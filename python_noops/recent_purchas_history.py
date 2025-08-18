#that is steps of the program
"step 1:creat a list"
"step 2:add things u wd buy to the list"
""
""
""
j=int(input("1.start \n 2.veiw ur bougth \n select an option:"))
import random
recent_bought=[]
prices=[]
while True:
 if j==1:
  while True:
    things_to_buy=input("enter things u wd buy:")
    price=random.randrange(1,100)
    recent_bought.append(things_to_buy)
    prices.append(price)
    s=input("do u want to continue or exit y/n:")
    if s.lower()=='n' :
        break
    elif s.lower()=='y':
        continue
    
   

     
 k= int(input("enter 2 to view 0 to exit or 1 to continue:"))
 if k==0:
    break
    
 elif k==2:        
       for i in range(len(prices)):      
            print(f"recent bougth:{recent_bought[i]},price:{prices[i]}")
 x=input("enter done to break:")
 if x=="done":
   break         
            