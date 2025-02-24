def process_test(time, delay):
    hours, minutes = map(int, time.split(':'))
    minutes += delay
    hours += minutes // 60
    minutes %= 60
    if hours >= 24:
        hours -= 24
    return f"{hours:02d}:{minutes:02d}"

t = int(input().strip())
for _ in range(t):
    time, delay = input().strip().split()
    delay = int(delay)
    print(process_test(time, delay))