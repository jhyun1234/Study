time=0
height=0
max_height=0

while 1:
    time+=1
    height=36*time-2*(time*time)
    if height>max_height:
        max_height=height
        htime=time
    if height<=0:
        dtime=time
        break
print(max_height,htime,dtime)
