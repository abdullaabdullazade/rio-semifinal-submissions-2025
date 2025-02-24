def yeni_vaxdi_hesabla(ss_dd, gecikme):
    ss, dd = map(int, ss_dd.split(":"))  # ss və dd-ni ayırıb int-ə çeviririk
    
    # Toplam dəqiqə
    toplam_deqiqe = ss * 60 + dd + gecikme
    
    # Yeni saat və dəqiqə
    yeni_ss = (toplam_deqiqe // 60) % 24  # 24 saatlıq dövr
    yeni_dd = toplam_deqiqe % 60  # 60 dəqiqəlik dövr
    
    # Yeni vaxtı formatda qaytarırıq
    return f"{yeni_ss:02}:{yeni_dd:02}"

# Testlər
t = int(input())  # Testlərin sayını alırıq
for _ in range(t):
    ss_dd, gecikme = input().split()
    gecikme = int(gecikme)
    
    # Yeni vaxtı hesablamaq və çap etmək
    print(yeni_vaxdi_hesabla(ss_dd, gecikme))
