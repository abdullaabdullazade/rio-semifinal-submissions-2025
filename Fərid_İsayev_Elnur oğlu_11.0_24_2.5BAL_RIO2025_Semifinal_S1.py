a,b = map(int,input().split())
um = []
ii=0
for i in range(a):
    qq = input().split()
    um.append(qq)
mn=99999999999999
for d in range(0,a-1):
    for i in range(b):
      for j in range(b):
           if abs(int(um[d][i])-int(um[d+1][j])) < mn:  
               mn = abs(int(um[d][i])-int(um[d+1][j]))

print(mn)
   