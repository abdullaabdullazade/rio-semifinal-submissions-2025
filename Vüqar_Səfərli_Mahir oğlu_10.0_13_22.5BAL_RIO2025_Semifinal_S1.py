a,b=map(int,input().split())
c=1
for i in range(a,b+1):
    g=str(i)
    d=len(g)
    if d==1:
        print("Palindrome!")
    else:
        for t in range(1,d):
            if g[0]==g[t]:
                c=c+1
            else:
                c=1
            if c==d:
                print("Palindrome!")
            else:
                c=1
                print(i)
                

