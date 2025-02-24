t = int(input())

for i in range(t):
    ssdd = input()
    ss = int(ssdd[0:2])
    dd = int(ssdd[3:5])
    s = len(ssdd)
    a = int(ssdd[5:s])

    dd = dd + a

    if dd > 59:
        m = dd // 60
        ss += m
        dd = dd - m * 60

    if ss >= 24:
        m = ss // 24
        ss = 0
        ss += m - 1

    if ss < 10:
        ss = ("0" + str(ss))
    if dd < 10:
        dd = ("0" + str(dd))

    ss = str(ss)
    dd = str(dd)
    print(ss + ":" + dd)