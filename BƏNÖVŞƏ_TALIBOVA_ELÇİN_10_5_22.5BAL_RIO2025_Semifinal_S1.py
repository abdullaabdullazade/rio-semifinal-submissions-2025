a,b=map(int,input().split())
d=0
for i in range(a,b+1):
    c=a%10
    d=0
    g=a
    while a>10:
        b=a//10%10
        if b!=c:
            break
        else:
            d=1
        a=a/10
    if a<10 or d==1:
        print("Palindrome!")
    else:
        print(g)
    a=g+1
    
