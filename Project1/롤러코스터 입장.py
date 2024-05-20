age=int(input("나이를 입력하세요."))

if age>=8:
    hegith=int(input("키를 입력하세요."))
    if hegith>=120:
        print("고속 롤러코스터 입장 가능")
    else:
        print("저속 롤러코스터 입장 가능")
else:
    print("입장 불가")    
    

