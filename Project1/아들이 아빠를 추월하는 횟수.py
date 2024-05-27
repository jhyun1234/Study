time=0

dad = 0
son = 0
num = 0
dad_walk = 10
dad_rest = 5
dad_Move = dad_walk + dad_rest;
over = False;
while time<=60:
    if time % dad_Move < dad_walk:
        dad += 3.6
    son += 2.5
    if son>dad and not over:
        num+=1
        over = True
    if son <= dad:
        over = False
        
    time+=1

print(num);
