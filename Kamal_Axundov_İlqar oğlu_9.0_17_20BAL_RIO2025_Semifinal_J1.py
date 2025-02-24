t = int(input())
for a in range(t):
    ssdd, d = str(input()).split()
    ss = (ssdd[0:2])
    dd = (ssdd[3:5])
    ss = int(ss)
    dd = int(dd)
    d = int(d)
    minutes = dd + d
    hours = int(minutes)//60
    new_minutes = int(minutes)%60
    ss += hours
    if ss >= 23:
        ss -= 24
    if ss in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:
        ss = "0" + str(ss)
    if new_minutes in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:
        new_minutes = "0" + str(new_minutes)
    print(str(ss) + ":" + str(new_minutes))
#не имею понятия что не так