t = input()
t=int(t)
l=0
s=0
d=0
gs=0
gd=0
z=[]
for i in range(t):
    v ,g=input().split()
    s,d = v.split(":")
    s=int(s)
    d=int(d)
    g=int(g)
    if s>=24 or d>=60:
        print(0)
        break
    if g>=60:
        gs=g//60
        gd=g%60
    else:
        gd=g
    s=s+gs
    d=d+gd
    if d>=60:
        s=s+d//60
        d=d%60
    if s>=24:
        s=s%24
    if s<10:
        s=int(s)
        s=str(s)
        s=(f"0{s}")
    if d<10:
        d=int(d)
        d=str(d)
        d=(f"0{d}")
    z.append(f"{s}:{d}")
#for i in range(t):
    print(z[l])
    l=l+1
