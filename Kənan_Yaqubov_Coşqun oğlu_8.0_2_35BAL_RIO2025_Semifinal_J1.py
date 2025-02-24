times = int(input())
mins = 0
hours = 0
for x in range(times):
    time, stop = input().split()
    time = time.split(':')
    hours = int(time[0])
    mins = int(time[1]) + int(stop)
    if mins >= 60:
        hours += mins // 60
        mins = mins % 60
    
    if hours >= 24:
        hours = hours - 24

    if hours < 10:
        hours = str(0) + str(hours)
    
    if mins < 10:
        mins = str(0) + str(mins)
    x = [*str(hours),':',*str(mins)]
    result = ''
    for x in x:
        result += x
    
    print(*result.split())