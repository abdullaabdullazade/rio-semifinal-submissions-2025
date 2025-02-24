t = int(input())
for i in range(t):
    ssdd, d = str(input()).split()   #как разелить сс и дд
    ss = ssdd[0:2]
    dd = ssdd[3:5]
    ss = int(ss)
    dd = int(dd)
    d = int(d)
    minutes = dd + d
    hours = int(minutes)//60
    new_minutes = int(minutes)%60
    ss += hours
    if ss > 23:
        ss -= 24
    print(str(ss) + ":" + str(new_minutes))