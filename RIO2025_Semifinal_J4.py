def func(list):
    a = list[2]
    list[2] = list[1]
    list[1] = list[0]
    list[0] = a
    return list

def last_3(list):
    for i in range(3):
        if list == sorted(list):
            return "Yes"
        else:
            list = func(list)
    return "No"

t = int(input())
for i in range(t):
    n = int(input())
    l = input().split()
    while len(l) > 3:
        for k in range(2, len(l)):
            if l[k] < l[k - 1] or l[k] < l[k - 2]:
                l[k - 2:k + 1] = func(l[k - 2:k + 1])
        while l[-1] == max(l) and len(l) > 3:
            p = l.pop()
    print(last_3(l))
    