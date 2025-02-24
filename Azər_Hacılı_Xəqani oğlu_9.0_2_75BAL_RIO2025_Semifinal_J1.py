def calculate_new_time(start_time, delay):
    hours, minutes = map(int, start_time.split(':'))
    total_minutes = hours * 60 + minutes + delay
    new_hours = (total_minutes // 60) % 24
    new_minutes = total_minutes % 60
    return f"{new_hours:02}:{new_minutes:02}"

def main():
    t = int(input())
    results = []
    for _ in range(t):
        start_time, delay = input().split()
        delay = int(delay)
        results.append(calculate_new_time(start_time, delay))
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()