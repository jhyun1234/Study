player1=int(input("정수 입력 :"))
player2=int(input("정수 입력 :"))
Referee=(input("H or L"))

if Referee=='H'or Referee=='h':
    if player1>player2:
        print("player1 win")
    elif player2>player1:
        print("player2 win")
    else:
        print("무승부")
elif Referee=='L'or Referee=='l':
    if player1<player2:
        print("player2 win")
    elif player2<player1:
        print("player1 win")
    else:
        print("무승부")
else:
    print("잘못된입력")
