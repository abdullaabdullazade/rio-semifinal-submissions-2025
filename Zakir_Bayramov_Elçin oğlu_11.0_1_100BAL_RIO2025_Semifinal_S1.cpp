l, r=map(int, input().split())
for i in range(l,r+1):
    a=str(i)
    d=[]
    for x in a:
        d.append(x)
    d.reverse()
    f=''.join(d)
    if f==a:
        print("Palindrome!")
    else:
        print(a)
