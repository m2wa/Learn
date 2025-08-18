print("welcome to student mark manager")
student_marks=[]
while True:
    student=input("enter student name:")
    mark=float(input("enter the mark:"))
    mark2=float(input("enter the mark:"))
    total=(mark+mark2)/2
    student_marks.append({"name":student,"merk1":mark,"mark2":mark2,"total marks":total})
    x=input("do u want to continue y/n:")
    if x.lower()=="n":
        break
       
       
n=input("1.view list of marks\n2.exit")

if n=='1':
      for i in range(len(student_marks)):
         print(f"{i+1}{student_marks[i]}")

