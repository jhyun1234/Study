rank=int(input("직급을 입력하세요."))
age=int(input("나이를 입력하세요."))

if rank==7 or rank==8:
    if 49>=age>=40:
        print("연금 80% 대상자 입니다.")
    else:
         print("연금 대상자가 아닙니다.")
elif rank==5 or rank==6:
    if 59>=age>=50:
        print("연금 100% 대상자 입니다.")
    else:
        print("연금 대상자가 아닙니다.")
else:
    print("연금 대상자가 아닙니다.")
