list1=[[11,33,22,7],[77,2,90],[3,66,44,9,8]]

minvalue=min(list1[0])
maxvalue=max(list1[2])
for i in range(len(list1)):
    print(sum(list1[i]))
    if minvalue>min(list1[i]):
        minvalue=min(list1[i])
    if maxvalue<max(list1[i]):
        maxvalue=max(list1[i])
print(minvalue)
print(maxvalue)


    
