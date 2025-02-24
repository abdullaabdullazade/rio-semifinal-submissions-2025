t = int(input())
for i in range(t):
    s = input()
    a = s.split(' ')[0]
    ss = int(a.split(':')[0])
    dd = int(a.split(':')[1])
    d = int(s.split(' ')[1])
    dd += d
    ss += (dd//60)
    dd = str(dd%60)
    ss = str(ss%24)
    if(len(ss)==1):
        ss = '0'+ss
    if(len(dd)==1):
        dd = '0'+dd
    print(ss+':'+dd)
