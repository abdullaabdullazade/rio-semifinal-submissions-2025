d=int(input())
lis=[]
al=""
hour=minute=time=0
res=[]
for i in range(d):
    al=input()
    lis.append((int(al[:2]),int(al[3:5]),int(al[6:])))
for hour,minute,time in lis:
    minute+=time
    hour=(hour+minute//60)%24
    minute%=60
    res.append((hour<10)*"0"+str(hour)+":"+(minute<10)*"0"+str(minute))

print("\n".join(res))
