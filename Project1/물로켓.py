time=0
height=0
Max_height=0

while 1:
    time+=1
    height=36*time-2*(time*time)
    if height>=Max_height:
        Max_time=time
        Max_height=height
    if height==0:
        Down_time=time
        break
print(Max_time,Max_height,Down_time)
    
