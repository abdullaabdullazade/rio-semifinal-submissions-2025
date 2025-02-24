t = int(input())

for i in range(t):
    ssdd = input()
    ss = int(ssdd[0:2])
    dd = int(ssdd[3:5])
    s = len(ssdd)
    d = int(ssdd[5:s])

    if dd > 59:
        m = dd // 60
        ss += m
        dd = dd - m * 60

    if ss >= 24:
        m = ss // 24
        t = ss - m * 24
        ss = 0
        ss += t
    dd = dd + d

    if dd > 59:
        m = dd // 60
        ss += m
        dd = dd - m * 60

    if ss >= 24:
        m = ss // 24
        t = ss - m * 24
        ss = 0
        ss += t

    if ss < 10:
        ss = ("0" + str(ss))
    if dd < 10:
        dd = ("0" + str(dd))

    ss = str(ss)
    dd = str(dd)
    print(ss + ":" + dd)