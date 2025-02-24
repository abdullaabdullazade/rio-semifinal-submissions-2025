t = int(input())

for _ in range(t):
    time_str, d = input().split()
    d = int(d)

    hours, minutes = map(int, time_str.split(':'))

    total_minutes = hours * 60 + minutes + d

    new_hours = (total_minutes // 60) % 24
    new_minutes = total_minutes % 60

    print(f"{new_hours:02d}:{new_minutes:02d}")