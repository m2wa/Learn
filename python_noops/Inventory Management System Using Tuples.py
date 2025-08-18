 
inventory=[]



def add_item():
  while True:
       item=input("enter item name:")
       id=int(input("enter the iD :"))
       quantity=int(input("enter the quantityL"))
       price=int(input("price:"))
       x=input("put y/n to continue or stop:")
       if x.lower()=='n':
         break 
      


  return(item,id,quantity)

print("1.view item \n 2.add item\n 3 delete item: ")
while True:
   x=int(input(""))
   if x==1:
     for i in range(len(inventory)):
        if not inventory:
         print("no inventory")
         break
        else:
          print(inventory[i]) 
   elif x==2:
     exist=add_item()
     inventory.append(exist)
   elif x==3:
     inventory.remove(exist)