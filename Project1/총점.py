score1=int(input("점수를 입력하세요"))
score2=int(input("점수를 입력하세요"))
s3=score1+score2           

if score1 >=75 and score2 >=75:
    if   s3>=180:
        print("최우수 학생")
    elif s3>=160:   
        print("우수 학생")
    elif s3>=150:
        print("보통 학생")
else:
    print("분발합시다.")    
     
