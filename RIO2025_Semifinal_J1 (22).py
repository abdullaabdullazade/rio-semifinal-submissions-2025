def solve():
    t = int(input())  # Test sayı
    for _ in range(t):
        time, d = input().split()  # Başlanğıc vaxtı və gecikmə
        d = int(d)  # Gecikmə müddəti

        # Başlanğıc vaxtını saat və dəqiqə olaraq oxuyuruq
        hours, minutes = map(int, time.split(":"))

        # Başlanğıc vaxtını dəqiqəyə çeviririk
        start_minutes = hours * 60 + minutes

        # Gecikməni əlavə edirik
        total_minutes = start_minutes + d

        # Yeni saat və dəqiqə hesablamaq
        final_hours = (total_minutes // 60) % 24  # Saatı 24 saatlıq dövrə uyğunlaşdırırıq
        final_minutes = total_minutes % 60  # Dəqiqəni 60 dəqiqəlik dövrə uyğunlaşdırırıq

        # Nəticəni çap edirik, saat və dəqiqə 2 rəqəmli formatda olmalıdır
        print(f"{final_hours:02}:{final_minutes:02}")


solve()
