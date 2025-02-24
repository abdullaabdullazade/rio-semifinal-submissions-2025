n=int(input())
for i in range(n):
    t=int(input())
    a=list(map(int,input().split()))
    b=sorted(a)
    if a==sorted(a) or a==sorted(a, reverse=True):
        print(1)
    else:
        print(2)
