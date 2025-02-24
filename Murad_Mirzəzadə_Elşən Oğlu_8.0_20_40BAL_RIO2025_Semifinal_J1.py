x=int(input())
u=0
q="0"
e=[]
for i in range(x):
    a,b=map(str,input().split(":"))
    b,c=b.split(" ")
    a=int(a)
    b=int(b)
    c=int(c)
    a += (int(b) + int(c)) // 60
    if b==0 and c==0:
        b=q+q
    elif b+c<10:
        b=q+str(b+c)
    elif b+c>=60:
        if (b+c)%60<10:
            b=q+str((b+c)%60)
        elif 60>(b+c)%60>10:
            b = int(b + c) % 60
        else:
            b=int(b + c) % 60
    if a==0:
        a=q+q
    elif a<10:
        a=q+str(a)
    elif 9<a<24:
        a=a
    else:
        a=a%24
        if a<10:
            a=q+str(a%24)
        else:
            a=a
    y=str(a)+":"+str(b)
    e.append(y)
for i in range(len(e)):
    print(e[i])