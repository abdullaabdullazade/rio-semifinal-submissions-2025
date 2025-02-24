def hell():
    t = int(input())
    for _ in range(t):
        vaxt, d = input().split()
        d = int(d)
        saat, deyge = map(int, vaxt.split(":"))
        baslama_deygesi = saat * 60 + deyge
        butun_deyge = baslama_deygesi + d
        son_saat = (butun_deyge // 60) % 24
        son_deyge = butun_deyge % 60
        print(f"{son_saat:02}:{son_deyge:02}")
hell()
