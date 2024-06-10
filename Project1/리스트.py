score=[0,1,2,3,4,5,6,7,8,9]
score[2:5]=[10,20,30]
print(score)
score[6:8]=[30,40,50,60,70]
print(score)


lol=[[1,2,3,],[4,5,],[6,7,8,9]]
print(lol[2])
print(lol[1][1])

for sub in lol:
    for item in sub:
        print(item,end=" ")
    print()
    print()


for sub in lol:
    sum=0
    for item in sub:
        sum+=item
    print(sum)
    print()

nums=[1,2,3,4]
nums.append(5)
nums.insert(1,99)
print(nums)



      
