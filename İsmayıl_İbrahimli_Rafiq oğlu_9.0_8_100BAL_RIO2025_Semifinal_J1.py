cavablar = []
n = int(input())


def saatitapma(saat, d):
    cixis = ""
    s = list(str(saat))
    deqiqe = int(s[3] + s[4])
    saat = int(s[0] + s[1])
    if deqiqe + int(d) >= 60:
        saat += (deqiqe + int(d)) // 60
        deqiqe = (deqiqe + int(d)) % 60
    else:
        deqiqe += int(d)
    if saat > 23:
        saat = saat % 24
    coxluq = []
    if deqiqe < 10:
        p = list(str(deqiqe))
        deqiqe = []
        deqiqe.append("0")
        deqiqe.append(p[0])
    else:
        deqiqe = list(str(deqiqe))
    if saat < 10:
        m = list(str(saat))
        saat = []
        saat.append("0")
        saat.append(m[0])
    else:
        saat = list(str(saat))
    coxluq.append(deqiqe[0])
    coxluq.append(deqiqe[1])
    coxluq.append(":")
    coxluq.append(saat[0])
    coxluq.append(saat[1])
    cixis = cixis + coxluq[3] + coxluq[4] + coxluq[2] + coxluq[0] + coxluq[1]
    return cixis

for r in range(n):
    a, b = map(str, input().split())
    cavab = saatitapma(a, b)
    cavablar.append(cavab)
for o in range(n):
    print(cavablar[o])