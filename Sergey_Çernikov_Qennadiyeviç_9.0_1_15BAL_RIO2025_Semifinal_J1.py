t= int(input())
for i in range(t):
    sskdd = list(map(str, input().split()))
    sskddint = list(map(int, sskdd[0].split(":")))
    ss = sskddint[0]
    dd = sskddint[1]
    time = int(sskdd[1])
    dd = dd + time
    if dd >= 60:
        ss = ss + 1
        if dd >= 60:
            dd = dd - 60
        if ss >= 24:
            ss = 0
    if ss < 9:
        ss = "0" + str(ss)
    if dd < 9:
        dd = "0" + str(dd)
    print(str(ss) + ':' + str(dd))