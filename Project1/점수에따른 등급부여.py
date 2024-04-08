score=float(input("점수를 입력하세요 만점은 100점까지입니다.\n"))

if score>100:
    print("점수는 100점을 넘어갈 수 없습니다.")
elif 100>= score >=95:
    print("A+")
elif 95> score >=90:
    print("A")    
elif 89>= score >=85:
    print("B+")
elif 85> score >=80:
    print("B")
elif 79>= score >=75:
    print("C+")
elif 75> score >=70:
    print("C")
elif 70> score >=69:
    print("D+")
elif 69> score >=60:
    print("D")    
else:
    print("F")

