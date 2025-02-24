def vaxt_hesablamaq(BaslamaVaxti,Gecikme):
    saat,deqiqe = map(int,BaslamaVaxti.split(":"))

    UmumiDeqiqe = saat*60 + deqiqe + Gecikme

    yeni_saat = (UmumiDeqiqe // 60) % 24
    yeni_deqiqe = UmumiDeqiqe % 60

    return f"{yeni_saat:02d}:{yeni_deqiqe:02d}"


t = int(input())

for _ in range(t):
    baslamaVaxti , gecikme = input().split()
    gecikme = int(gecikme)


    netice  = vaxt_hesablamaq(baslamaVaxti,gecikme)
    print(netice)