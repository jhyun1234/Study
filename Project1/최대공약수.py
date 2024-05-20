num1=int(input("정수를 입력하세요."))
num2=int(input("정수를 입력하세요."))

gcd=0
temp=0
if num2==0:
    gdc=num1

while num2!=0:
    temp=num2
    num2=num1%num2
    num1=temp
gcd=num1
print(gcd)
