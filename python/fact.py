def fact(n):
    if n==0 or n==1:
        return 1
    else:
        return n*fact(n-1)
num=int(input("enter positive integer"))
if num<0:
    print("factorial does not exist for negative number")
else:
    result=fact(num)
    print("factorial is =",result)