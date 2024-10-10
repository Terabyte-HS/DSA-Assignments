print('-------------Calculator--------------')
def addition(a,b):
    print(a,' + ',b,' =' ,a+b)

def subtraction(a,b):
    print(a,' - ',b,' = ',a-b)

def multiplication(a,b):
    print(a,' * ',b,' = ',a*b)

def division(a,b):
    print(a,' / ',b,' = ',a/b)

def power(a,b):
    print(a,' ^ ',b,' = ',pow(a,b))

a=int(input('Enter the first number :'))
b=int(input('Enter the second number :'))
n=1
while(n!=6 or (n>0 and n<=5)):
    c=int(input('Select the operation : \n 1]Addtion \n 2]Substraction \n 3]Multiplication \n 4]Division \n 5]Power \n 6]Exit '))
    if(c==1):
        addition(a,b)
    elif(c==2):
        subtraction(a,b)
    elif(c==3):
        multiplication(a,b)
    elif(c==4):
        division(a,b)
    elif(c==5):
        power(a,b)
    elif(c==6):
        n=0


