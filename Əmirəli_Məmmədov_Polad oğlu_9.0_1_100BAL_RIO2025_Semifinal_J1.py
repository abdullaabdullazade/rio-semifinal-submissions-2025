def vaxt_hesabla(baslama_vaxti, gecikme):
    saat, deqiqe = map(int, baslama_vaxti.split(':'))
    
  
    umumi_deqiqe = saat * 60 + deqiqe + gecikme

    yeni_saat = (umumi_deqiqe // 60) % 24
    yeni_deqiqe = umumi_deqiqe % 60
    
    
    return f"{yeni_saat:02d}:{yeni_deqiqe:02d}"

t = int(input())


for _ in range(t):
   
    baslama_vaxti, gecikme = input().split()
    gecikme = int(gecikme)
    

    netice = vaxt_hesabla(baslama_vaxti, gecikme)
    print(netice)
