num1=int(input("정수를 입력하세요."))
num2=int(input("정수를 입력하세요"))

gcd=0
temp=0
if num2==0:
    gcd=num1
while num2!=0:
    temp=num2
    num2=num1%num2
    num1=temp

    gcd=num1
print(gcd)

num3=int(input("정수를 입력하세요."))

while num3!=0:
    print(num3%2)
