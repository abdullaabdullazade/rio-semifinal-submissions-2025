n,a=map(int,input().split())
c=[]
d=[]
for i in range(n):
    b=list(map(int,input().split()))
    c.append(b)
for i in c[0]:
    for j in c[1]:
        d.append(((i-j)**2)**(1/2))
print(int(min(d)))        

    

    
    
    

    
