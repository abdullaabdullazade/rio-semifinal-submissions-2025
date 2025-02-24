def calculate_new_time(time, delay):
    # Vaxtı saat və dəqiqə olaraq ayırırıq
    hour, minute = map(int, time.split(":"))
    
    # Gecikməni dəqiqə olaraq əlavə edirik
    total_minutes = hour * 60 + minute + delay
    
    # Yeni saat və dəqiqəni hesablayırıq
    new_hour = (total_minutes // 60) % 24
    new_minute = total_minutes % 60
    
    # Nəticəni ss:dd formatında qaytarırıq
    return f"{new_hour:02}:{new_minute:02}"

# Test sayını alırıq
t = int(input())

for _ in range(t):
    # Hər bir test üçün vaxt və gecikməni alırıq
    time, delay = input().split()
    delay = int(delay)
    
    # Yeni başlama vaxtını hesablayırıq
    print(calculate_new_time(time, delay))
