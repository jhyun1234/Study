num1=int(input("첫 번째 숫자 입력"))
op=str(input("연산자 입력"))
num2=int(input("두 번째 숫자 입력"))

if op=='+':
    print("수식 결과 :%d + %d =%d"%(num1,num2,num1+num2))
elif op=='-':
    print("수식 결과 :%d - %d =%d"%(num1,num2,num1-num2))
elif op=='*':
    print("수식 결과 :%d * %d =%d"%(num1,num2,num1*num2))
elif op=='/':
    print("수식 결과 :%d / %d =%d"%(num1,num2,num1/num2))
else:
    print("해당 연산자 없음")
