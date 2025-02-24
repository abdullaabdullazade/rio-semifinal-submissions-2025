t= int(input())
a= []
for i in range(t):
    d = input().split()
    s = d[0].split(":")
    dq = int(d[1])
    s1 = int(s[0])
    d1 = int(s[1])
    d1 = d1+dq
    while d1 >= 60:
        d1 -= 60
        s1 += 1
    while s1 >= 24:
        s1 -= 24
    a.append(str(s1) + ":" + str(d1))
for item in a:
    print(item)
