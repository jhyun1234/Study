num1=int(input("정수를 입력하세요."))
num2=int(input("정수를 입력하세요."))

newnum1=num1
newnum2=num2

gcd=0
lcm=0
temp=0

if num2==0:
    lcm=num1
    gcd=num1

while num2!=0:
    temp=num2
    num2=num1%num2
    num1=temp

gcd=num1
print("최대 공약수",gcd)



lcm=(newnum1*newnum2)/gcd

print("최소공배수",lcm)
