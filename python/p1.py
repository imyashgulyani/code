#program to find if the number is prime or not
count=0
a=int(input("enter a number"))
for i in range(2,(a//2)+1):
    if a%i==0:
        count=count+1
        break
if count>0:
    print("number is not prime")
else:
    print("number is prime")
b=int(input("enter a number"))
print("multiplication =", a*b, "division =", a//b, "addition =", a+b, "subtraction =", a-b)