def solve():
    t = int(input())
    for _ in range(t):
        time, d = input().split()
        d = int(d)
        hours, minutes = map(int, time.split(":"))

        # Başlanğıc vaxtını dəqiqəyə çeviririk
        start_minutes = hours * 60 + minutes

        # Gecikməni əlavə edirik
        total_minutes = start_minutes + d

        # Yeni saat və dəqiqə hesablamaq
        final_hours = (total_minutes // 60) % 24
        final_minutes = total_minutes % 60

        # Nəticəni çap edirik
        print(f"{final_hours:02}:{final_minutes:02}")


solve()