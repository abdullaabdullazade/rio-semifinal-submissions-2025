t = int(input())
for i in range(t):
    first = input()
    if(len(first)==8):
        d = int(first[6])*10 + int(first[7])
    else:
        d = int(first[6])
    h = int(d)//60
    m = int(d)%60
    h1 = int(first[0])*10 + int(first[1])
    m1 = int(first[3])*10 + int(first[4])
    lasth = h1+h
    lastm = m1+m
    if(lastm >60):
        lasth += 1
        lastm = lastm%60
    if(lasth >= 24):
        lasth = lasth%24
    if(lastm < 10):
        lastm = "0" + str(lastm)
    if(lasth < 10):
        lasth = "0" + str(lasth)
    print(str(lasth)+':'+str(lastm))
    
    
