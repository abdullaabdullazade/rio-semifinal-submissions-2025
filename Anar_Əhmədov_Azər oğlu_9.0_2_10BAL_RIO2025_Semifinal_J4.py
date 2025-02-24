t = int(input())
for i in range(t):
    st = input()
    hour = int(st[:2])
    minute = int(st[3:5])
    late = int(st[6:])
    l_hour = late // 60
    l_minute = late % 60
    st_new = ""
    if (l_minute + minute) % 60 < 10:
        st_new += "0" + str((l_minute + minute) % 60)
    else:
        st_new += str((l_minute + minute) % 60)
    if (l_minute + minute) // 60 == 1:
        l_hour += 1
    if (l_hour + hour) % 24 < 10:
        st_new = "0" + str((l_hour + hour) % 24) + ":" + st_new
    else:
        st_new = str((l_hour + hour) % 24) + ":" + st_new
    print(st_new)