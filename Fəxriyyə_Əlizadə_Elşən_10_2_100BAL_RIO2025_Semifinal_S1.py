a,b=map(int,input().split())
x=1
for i in range(a,b+1):
    x=i
    i=str(i)
    i=list(i)
    i.reverse()
    i="".join(i)
    if int(i)==x:
        print("Palindrome!")
    else:
        print(x)