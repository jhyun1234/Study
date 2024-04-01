a=float(input("국어 점수 입력 : "))
b=float(input("영어 점수 입력 : "))
c=float(input("수학 점수 입력 : "))

print(type(a))
print(type(b))
print(type(c))

f=float(a+b+c)/3

print("당신의 성적은",f,"입니다.")

if f>=90:
    print("축하합니다 A+ 입니다.")
elif 90>f>=85 :
    print("축하합니다 A 입니다.")
elif 85>f>=80 :
     print("축하합니다 B+ 입니다.")
elif 85>f>=75 :
     print("축하합니다 B 입니다.")
elif 75>f>=65 :
     print("축하합니다 C+ 입니다.")
elif 65>f>=50 :
     print("축하합니다 C 입니다.")
else :
     print("D or F 입니다.")
     
print("감사합니다")
