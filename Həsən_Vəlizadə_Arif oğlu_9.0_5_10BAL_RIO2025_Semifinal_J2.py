t=int(input())
res=[]
m=[]
q=[]
a=c=0
flag=1
for i in range(t):
    a=int(input())
    m=sorted(list(map(int,input().split())))
    q=list(map(int,input().split()))
    c=flag=1
    for i,b in enumerate(m,0):
        c*=(sum(b>=u for u in q)-i)
        if c<=0:
           # res.append(0)
           print(c)
           flag=0
           break
    if flag:
      #  res.append(c)
      print(c)
#for i in res:
 #   print(i%(10**9 + 7))
