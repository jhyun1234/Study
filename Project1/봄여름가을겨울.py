month=int(input("현재 월을 입력하세요."))

if 5>=month>=3:
    print("봄 입니다.")
elif 8>=month>=6:
    print("여름 입니다.")
elif 9>=month>=11:
    print("가을 입니다.")
elif month>=13:
    print("잘못된 입력입니다.")
else:
    print("겨울 입니다.")
