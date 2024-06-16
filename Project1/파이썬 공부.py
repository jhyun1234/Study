'''
print('풍선')
print("나미")
print("ㅋ"*9)

print(5>10)
print(5<10)
print(True)
print(False)
print(not True)
print(not False)

print(not(5>10))
'''
'''
animal="고양이"
name="마옹이"
age=4
hobby="낮잠"
is_adult=age>=3
'''
'''
이렇게 하면
여러 문장이
주석처리 된다
'''
'''
print("우리집 "+animal+"의 이름은 "+name+"입니다.")
hobby="공놀이"
#print(name+"는"+str(age)+"살이며, "+hobby+"을 아주 좋아해요") 
print(name,"는",(age),"살이며, ",hobby,"을 아주 좋아해요")
print(name,"는 어른일까요? ",str(is_adult))
'''
'''
station="사당"
print(station,"행 열차가 들어오고 있습니다.")
station="신도림"
print(station,"행 열차가 들어오고 있습니다.")
station="인천공항"
print(station,"행 열차가 들어오고 있습니다.")
'''
'''
print(2**3) #2^3 = 8
print(5%3)  # 나머지 구하기 2
print(5//3) # 나눴을 때의 몫
print(10//3)

print(4>=7)
print(10>=3)
print(5>1)
print(5>=5)

print()
print(3==3)
print(4==2)
print(3+4==7)
print()

print(1!=3)
print(not(1!=3))
print((3>0) and(3<5))
print((3>0) & (3<5))
print((3>0) or (3>5))
print((3>0) | (3>5))
print(5>4>3)
print(5>4>7)
'''
'''
print(2+3 *4)
print((2+3)*4)
number = 2+3 *4
print(number)
number=number+2
print(number)
number+=2
print(number)
number*=2
print(number)
number/=2
print(number)
number-=2
print(number)

number%=5
print(number)
'''
'''
print(abs(-5)) # 절대값 5
print(pow(4,2)) # 지수승 16
print(max(5,12)) # 큰값 12
print(min(5,12)) # 작은값 5
print(round(3.14)) # 반올림 3
print(round(4.99)) # 5

from math import*
print(floor(4.99)) # 내림 4
print(ceil(3.14)) # 올림 4
print(sqrt(16)) # 제곱근 4
'''
from random import *
'''
print(random()) # 0.0 ~ 1.0 미만의 임의의 값 생성
print(random()*10) # 0.0 ~10. 0 미만의 임의의 값 생성
print(int(random()*10)) # 0~10 미만의 임의의 값 생성
print(int(random()*10))
print(int(random()*10))
print(int(random()*10))
print(int(random()*10+1)) # 1 ~ 10 이하의 임의의 값 생성
'''
'''
print(int(random()*45)+1) # 1~45 이하의 임의의 값 생성
print(int(random()*45)+1) # 1~45 이하의 임의의 값 생성
print(int(random()*45)+1) # 1~45 이하의 임의의 값 생성
print(int(random()*45)+1) # 1~45 이하의 임의의 값 생성
print(int(random()*45)+1) # 1~45 이하의 임의의 값 생성
print(int(random()*45)+1) # 1~45 이하의 임의의 값 생성
print(int(random()*45)+1) # 1~45 이하의 임의의 값 생성
'''
'''
print(randrange(1,46)) # 1~46 미만의 임의의 값 생성
print(randrange(1,46)) # 1~46 미만의 임의의 값 생성
print(randrange(1,46)) # 1~46 미만의 임의의 값 생성
print(randrange(1,46)) # 1~46 미만의 임의의 값 생성
print(randrange(1,46)) # 1~46 미만의 임의의 값 생성
print(randrange(1,46)) # 1~46 미만의 임의의 값 생성

'''
'''
print(randint(1,45)) # 1~45 이하의 임의의 값 생성
print(randint(1,45)) # 1~45 이하의 임의의 값 생성
print(randint(1,45)) # 1~45 이하의 임의의 값 생성
print(randint(1,45)) # 1~45 이하의 임의의 값 생성
print(randint(1,45)) # 1~45 이하의 임의의 값 생성
print(randint(1,45)) # 1~45 이하의 임의의 값 생성
print(randint(1,45)) # 1~45 이하의 임의의 값 생성
'''
'''
offline=(randint(4,28))
print("오프라인 스터디 모임 날짜는 매월",str(offline),"일로 선정되었습니다.")

'''
'''
sentence='나는 소년입니다.'
print(sentence)
sentence2="파이썬은 쉬워요"
print(sentence2)
sentence3="""
나는 소년이고,
파이썬은 쉬워요
"""
print(sentence3)

'''
'''
jumin="010627-3094311"

print("성별 : ",jumin[7])
print("연생 : ",jumin[0:2]) # 0부터 2직전까지
print("월 : ",jumin[2:4])
print("일 : ",jumin[4:6])

print("생년월일 : ",jumin[:6]) # 처음부터 6직전까지
print("뒤 7자리 : ",jumin[7:]) # 7부터 끝까지
print("뒤 7자리(뒤에부터) : ",jumin[-7:]) # 맨 뒤에서 7번째 끝까지

'''
'''
python="Python is Amazing"
print(python.lower())
print(python.upper())
print(python[0].isupper())
print(len(python))
print(python.replace("Python","Java"))

index=python.index("n")
print(index)
index=python.index("n",index+1)
print(index)

print(python.find("Java")) # -1 값이 포함되어 있지 않을 때 프로그램 계속 실행
#print(python.index("Java")) 실행 안됨
print("hi")
print(python.count("n"))
'''
'''
print("나는 %d살 입니다." %24)
print("나는 %s을 좋아해요."%"파이썬")
print("Apple 은 %c로 시작해요."%"A")
# %s
print("나는 %s살 입니다." %24)
print("나는 %s색과 %s색을 좋아해요." %("파란","빨간"))

print("나는 {}살 입니다.".format(24))
print("나는 {}색과 {}색을 좋아해요.".format("파란","빨간"))
print("나는 {0}색과 {1}색을 좋아해요.".format("파란","빨간"))
print("나는 {1}색과 {0}색을 좋아해요.".format("파란","빨간"))

print("나는 {age}살이며, {color}색을 좋아해요.".format(age=24,color="빨간"))
print("나는 {age}살이며, {color}색을 좋아해요.".format(color="빨간",age=24))


age=24
color="빨간"
print(f"나는 {age}살이며, {color}색을 좋아해요.")

'''
'''
print("백문이 불여일견 \n백견이 불여일타")

print("저는"' 최종현' "입니다.")
print('저는 "최종현" 입니다.')
print("저는 \"최종현\"입니다.")
print('저는 \'최종현\'입니다.')

print("C:\\Users\\Study\\Desktop\\")

# \r 커서를 맨 앞으로 이동
print("Red Apple\rPine")

# \b 백스페이스 (한 글자 삭제)
print("Redd\bApple")
'''
'''
site="http://naver.com"
print(site[7:12])
print(site[7:10],len(site[7:12]),site.count("e"),"!")

site2="http://gooole.com"
my_str=site2.replace("http://","")
print(my_str)
my_str=my_str[:my_str.index(".")]
print(my_str)
password=my_str[:3]+str(len(my_str))+str(my_str.count("e"))
print("{0}의 비밀번호는 {1}입니다.".format(site2,password))

'''
'''
subway=[10,20,30]
print(subway)
subway=["유재석","박명수","조세호"]
print(subway)

print(subway.index("조세호"))

subway.append("하하")
print(subway)

subway.insert(1,"정형돈")
print(subway)

'''
'''
print(subway)

print(subway.pop())
print(subway)

print(subway.pop())
print(subway)
'''
'''

subway.append("유재석")
print(subway)
print(subway.count("유재석"))
'''
'''
num_list=[5,3,2,1,4]
num_list.sort()  # 순서대로 정렬
print(num_list)

num_list.reverse() # 반대로 정렬
print(num_list)

num_list.clear() # 모두 지우기
print(num_list)
'''
'''
mix_list=["유재석",123,True]
num_list=[5,3,2,1,4]
#print(mix_list)

num_list.extend(mix_list)
print(num_list)

'''
'''
cabinet={3:"유재석",100:"박명수"}

print(cabinet[3])
print(cabinet[100])
print(cabinet.get(3))
#print(cabinet[5]) # 프로그램 종료
print(cabinet.get(5)) #none을 출력하고 계속 진행
print(cabinet.get(5,"사용가능"))
print("hi")

print(3 in  cabinet)
print(5 in cabinet)
'''
'''
cabinet={"A-3":"유재석","B-100":"박명수"}
print(cabinet["A-3"])
print(cabinet["B-100"])

print(cabinet)
cabinet["A-3"]="정형돈"
cabinet["C-20"]="정준하"
print(cabinet)

del cabinet["A-3"]
print(cabinet)

print(cabinet.keys())
print(cabinet.values())
print(cabinet.items())

cabinet.clear()
print(cabinet)
'''
'''
menu=("돈까스","치즈까스")
print(menu[0])
print(menu[1])

# menu.add("생선까스") 튜플은 추가 불가

name="최종현"
age=24
hobby="코딩"
print(name,age,hobby)


(name,age,hobby)=("최종현",24,"코딩")
print(name,age,hobby)

'''
'''
# 집합 (set)
# 중복 안됨, 순서 없음
my_set={1,2,3,3,3}
print(my_set)

java={"유재석","박명수","정준하"}
python=set(["유재석","노홍철"])

# java와 python을 모두 할 수 있는 사람
print(java&python)
print(java.intersection(python))

# java를 할 수 있거나 python을 할 수 있는 사람
print(java | python)
print(java.union(python))

# java는 할 수 있지만 python을 할 줄 모르는 사람
print(java-python)
print(java.difference(python))

# pyhton 할 줄 아는 사람이 늘어남
python.add("박명수")
print(python)

# java를 잊음
java.remove("정준하")
print(java)

'''
'''
menu={"커피","우유","주스"}
print(menu,type(menu))

menu=list(menu)
print(menu,type(menu))

menu=tuple(menu)
print(menu,type(menu))

menu=set(menu)
print(menu,type(menu))
'''
'''
ID=range(1,21) 
#print(type(ID))
ID=list(ID)
#print(type(ID))

print(ID)
shuffle(ID)
print(ID)

winners=sample(ID,4)
print("-- 당첨자 발표 --")
print("치킨 당첨자 : {0}".format(winners[0]))
print("커피 당첨자 : {0}".format(winners[1:]))
print("--축하합니다.--")

'''
'''
weather=input("오늘 날씨는 어떱니까")
if weather=="비"or weather =="눈":
    print("우산을 챙기세요.")
elif weather=="미세먼지":
    print("마스크를 챙기세요.")
else:
    print("화창하이 직인다.")

'''
'''
temp=int(input("기온은 어떱니까"))
if 30<= temp:
    print("뒤지고 싶으믄 나가쇼")
elif 10<= temp and temp <30:
    print("괜찮은 날씨노")
elif 0<=temp <10:
    print("쪼매 추우니깐 뭐라도 챙기쇼")
else:
    print("얼어 뒤집니다.")
'''


#for waitting_num in range(1,6):
 #   print("대기번호 : {0}".format(waitting_num))

#starbucks=["짱구","철수","맹구","유리","훈발럼"]
#for customer in starbucks:
    #print("{0}, 커피가 나왔습니다.".format(customer))
'''
customer="토르"
index=5
while index>=1:
    print("{0}, 커피가 준비되었습니다.{1}번 남았어요".format(customer,index))
    index-=1
    if index ==0:
        print("커피는 폐기되었습니다.")
'''
'''
customer="아이언맨"
index=1
while True:
    print("{0}, 커피가 준비되었습니다.호출 {1}회 ".format(customer,index))
    index+=1
'''

'''
customer="토르"
person="Unknown"
while person != customer:
    print("{0}, 커피가 준비되었습니다.".format(customer))
    person=input("이름이 어떻게 되세요?")
'''
'''
absent=[2,5] #결석
no_book=[7] # 책을 안가져옴

for student in range(1,11):
    if student in absent:
        continue
    elif student in no_book:
        print("오늘 수업 여까지.{0}는 교무실로 와라".format(student))
        break
    print("{0}, 책 읽어라".format(student))
'''
'''
#출석 번호 1,2,3,4 앞에 100을 붙이기로함 ->101,102 ...
students=[1,2,3,4,5]
students=[i+100 for i in students]
print(students)

# 학생 이름을 길이로 변환
students=["Solider","mcgreen","bright","show"]
students=[len(i) for i in students]
print(students)

# 학생 이름을 대문자로 변환
students=["Solider","mcgreen","bright","show"]
students=[i.upper() for i in students]
print(students)

'''
'''
customer=range(5,51)
customer=list(customer)
print(customer)
customers=0
driver=0
while customers<50:
    for i in range(len(customer)):
        travel_time =  round(random.randint(5, 50))
        if 5<=customer[i]<=15:
            print("[0] {0}번째 손님 (소요시간 : {1}분)".format(i+1,travel_time))   
            customers+=1
            driver+=1
        else:
            print("[ ] {0}번째 손님 (소요시간 : {1}분)".format(i+1,travel_time))
'''
        

'''
count =0 # 총 탑승 승객 수
for i in range(1,51):
    time=randrange(5,51) # 5~50분 소요시간
    if 5<=time <=15: #5~15분 이내의 손님, 탑승 수 증가 처리
        print("[0] {0}번째 손님 (소요시간 : {1}분)".format(i,time))
        count +=1
    else: # 매칭 실패
        print("[ ] {0}번째 손님 (소요시간 : {1}분)".format(i,time))
print("총 탑승 승객 : {0} 분".format(count))
    
'''
'''
num=int(input("합계를 원하는 숫자 입력"))
i=1
sum1=0
while i<=num:
    sum1=sum1+i
    i+=1
print("1부터 {}까지 합은 : {}이다.".format(num,sum1))
    
'''
'''   
num=int(input("출력을 원하는 단을 입력 :"))

for i in range(10):
    print(num,"*",i,"=",num*i)

'''
'''
num=int(input("합을 원하는 배수 입력:"))
sum1=0
for i in range(num,1001,num):
    sum1=sum1+i
    print("1부터 1000까지의 {}의 배수의 합은 {}".format(num,sum1))  
'''
'''
num=int(input("배수 숫자 입력 : "))
sum1=0
i=0
while i<100:
    i+=1
    if(i%num)!=0:
        continue
    sum1=sum1+i
print("1부터 100까지의 {}의 배수의 합은 {}".format(i,sum1))

'''
'''
score=0
subject=0
total=0
while 5>subject:
    score=int(input("성적 입력: "))
    if(score<=100 and score>=0):
        total+=score
        subject+=1
        print("성적 : {}".format(score))
    else:
        print("유효한 성적이 아닙니다.")
print("총점 {} ".format(total))
print("평균 {}".format(total/5))
'''

'''
count=0
sum1=0
while True:
    num=int(input("숫자를 입력 :"))
    sum1+=num
    count+=1
    if sum1>=1000:
        print("1000을 넘은 수 : {},평균 {}".format(sum1,sum1/count))
        break
'''
'''
i=2
while i<=9:
    n=1
    while n<=9:
        if((n*i)%2==0):
            print(str(i),"*",str(n),"=",str(i*n))
        n+=1
    i+=1
print()
for i in range(2,10):
    for n in range(1,10):
        if  i*n %2==0:
            print(i,"*",n,"=",i*n)
'''

'''
time=0
hegiht=0
max_height=0
while 1:
    time+=1
    height=36*time-2*(time*time)
    if height>max_height:
        max_height=height
        height_time=time
    if height<=0:
        ground_time=time
        break
print("물로켓이 최고높이가 되는 시간 {} , 높이 {}, 땅에 떨어진 시간{}"
      .format(height_time,max_height,ground_time))

'''
#아들은 7.2km 앞에서 2.7의 속력으로 가고 아빠는 0부터 3.4의 속력으로 간다
#아빠가 아들을 따라잡는 시간은
'''
dad_dis=0
son_dis=7.2
time=0
while 1:
    dad_dis+=3.4
    son_dis+=2.7
    time+=1
    if dad_dis>=son_dis:
        break
print("아빠가 아들을 따라잡는 시간 {} 시간".format(time))
'''

#아빠는 3.6의 속력으로 10초 걷고 5초 쉬고 아들은 2.5의 속력으로 계속 걷는다
#1시간동안 아빠가 아들을 추월하는 횟수는?
'''
time=0
dad_dis=0
son_dis=0
count=0
dad_rest=5
dad_walk=10
dad_total_move=dad_walk+dad_rest
over=False
while time<=60:
    if time%dad_total_move<dad_walk:
        dad_dis+=3.6
    son_dis+=2.5
    if dad_dis>son_dis and not over:
        count+=1
        over=True 
    if son_dis>dad_dis:
        over=False
    time+=1
print("아빠가 아들을 추월한 횟수 {}".format(count))

'''
'''
score=[88,95,70,100,99]
sum=0
for s in score:
    sum+=s
avg=sum/len(score)
print("총점 {} 평균{}".format(sum,avg))


#분산을 구하라
#제곱의 평균 - 평균의 제곱
sum1=0
variance=0
for s in score:
    sum1+=s*s
avg_sq=sum1/len(score)

variance=avg_sq-(avg*avg)

print("분산 {}".format(variance))
print("제곱의 평균{}".format(avg_sq))

'''
'''
list1=[[11,33,22,7],[77,2,90],[3,66,44,9,8]]
minvalue=min(list1[0])
for s in range(len(list1)):
        print("{}번 째 줄의 합 {}".format(s,sum(list1[s])))
        if minvalue>min(list1[s]):
            minvalue=min(list1[s])
print("리스트에서 가장 작은 값 {}".format(minvalue))

'''
num=int(input("숫자 입력 :"))

templist=[]

for i in range(1,num+1):
        count=0
        for j in range(1,i+1):
            if i%j==0:
                count+=1
        if count==2:
            templist.append(i)
print("1부터 {} 까지 소수의 리스트 {}".format(num,templist))
print("1부터 {} 까지 소수의 갯수 {}".format(num,len(templist)))










