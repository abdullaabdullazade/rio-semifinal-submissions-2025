k=list(map(int,input().split()))
l=[]
for i in range(k[0]):
    m=1000000000
    l1=list(map(int,input().split()))
    l.append(l1)

if k[0]!=2:
    print(1)
else:
    for j in range(k[1]):
        for x in range(k[1]):
            if abs(l[0][j]-l[1][x])<m:
                m=abs(l[0][j]-l[1][x])
    print(m)
                
