t=int(input())
for i in range(t):
    n=input()
    a=list(map(int,input().split()))
    if(a==sorted(a) or a[::-1]==sorted(a)):
        print(1)

    else:
        print(2)
