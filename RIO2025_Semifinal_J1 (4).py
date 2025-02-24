def main(n,d):
    saat = int(n[0] + n[1])
    saniye = int(n[3] + n[4])
    d = int(d)
    saniye = saniye + d
    if saniye >= 60:
        saat += saniye//60
        saniye = saniye%60
    if len(str(saniye)) == 1:
            saniye = '0' + str(saniye)
    if saat >= 24:
        saat = '00'
    vaxt = f'{saat}:{saniye}'
    return(vaxt)

results = []
t = int(input())
for _ in range(t):
    n,d = map(str,input().split())
    a = main(n,d)
    results.append(a)
for i in results:
    print(i)
    
