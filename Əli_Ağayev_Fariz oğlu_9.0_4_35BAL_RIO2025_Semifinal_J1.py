s = []
k = []
t = int(input())
for i in range(t):
    x, d =map(str, input().split())
    s.append(x)
    a = int(x[0]+x[1])
    b = int(x[3]+x[4])
    if int(d) // 60:
        a += int(d)//60
        b += int(d)-int(d)//60*60
    else:
        b += int(d)
    if b >= 60:
        a += 1
        b -= 60
    if a >= 24:
        a-=24
   
        
    if  b < 10 and  a < 10:
        x = "0"+str(a)+":"+"0"+str(b)
    elif b < 10 and a >=10:
        x = str(a)+":0"+str(b)
    elif b >= 10 and a < 10:
        x = "0"+str(a)+":"+str(b)
    else:
        x = str(a)+":"+str(b)
    k.append(x)
for i in k:
    print(i)

        
    
