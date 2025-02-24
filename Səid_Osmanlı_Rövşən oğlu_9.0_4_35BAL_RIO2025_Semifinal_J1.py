t= int(input())
for i in range(1, t+1):
    ssdd = input()
    ss = int(ssdd[:2])
    dd = int(ssdd[3:6])
    v = int(ssdd[6:])
    if 1 > t <1000 or 0>v<10**9:
        break
    if ss > 24 or dd > 60:
        break
    saat = int(v /60)
    deq = int(v - saat*60)
    saat+=ss
    deq+=dd
    if deq>=60:
        saat+=1
        deq-=60
    if saat  >= 24:
        saat-= 24
    if deq <= 9:
        deq = "0" + str(deq)
    if int(saat) <= 9:
        saat = "0" + str(saat)
    print(str(saat) + ":" + str(deq))