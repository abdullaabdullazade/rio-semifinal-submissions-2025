def ifpalindrom(a):
    a=list(str(a))
    b=a.copy()
    b.reverse()
    if a==b:
        return "c!"
        print(a)
l,r=map(int,input().split())
for i in range(l,r+1):
    if ifpalindrom(i)=="c!":
        print("Palindrome!")
    else:
        print(i)

