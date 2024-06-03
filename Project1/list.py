city=['서울','부산','대구','광주']
print(city[1])
name='최종현'
surname=name[0]
print(surname)
surname=name[1]
print(surname)
surname=name[2]
print(surname)
surname=name[-3]
print(surname)
surname=name[-2]
print(surname)
surname=name[-1]
print(surname)
city[1]='전주'
print(city[1])

a=(100,200,300,400,500)
print(a[4])
givenname=name[1:3]
print(givenname)
#a[1]=600
#print(a[1])
print(city[0:])
print(city[-0:])
print(city[-2:3])
print(city[-3:3])
print(city[2::])

print(a[1:4])
print(a[::2])
print(a[-10:10])
b=(600,700,800,900,1000)
c=('책번호1','책번호2')
d=a+b+c
print(d)
#plus=city+a
#print(plus)

s1="Hello "
s2=s1+'My World'
print(s2)

lang=('C','C++','C#','Python')
langs=lang*5
print(langs)

lang2=['프로그래밍 너무 어렵다','GPT 만세','게임 개발 지옥']
langs2=lang2*3
print(langs2)

#lang3=lang+lang2
#print(lang3)

s3=str('Hello World')
print(s3)
type(s3)

s4=str(123.3212)
s5=str(['서울','부산','대구'])
s6=str({'서구','동구',54-5,49248})
print(s4[0])
print(s5[5])
print(s6[8])

score=[88,95,70,100,99]
sum=0
for s in score:
    sum+=s
average=sum/len(score)
print('총 점수 : ',sum)
print('평균 : ',average)
print('점수 출력 : ',score)

msum=0
for s in score:
    msum+=s*s
msum=msum/len(score)
print(msum)
variance=msum-(average*average)
print(variance)





