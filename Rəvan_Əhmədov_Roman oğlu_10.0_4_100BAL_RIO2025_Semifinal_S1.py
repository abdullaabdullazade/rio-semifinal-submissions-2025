a, b=map(int, input().split())
for i in range(a, b+1):
    n=0
    s=i
    k=0
    if s<10:
        k=k+1
    if s==10:
        k=k-10
    if s>10:
        while s>0:
            m=s%10
            s=s//10
            n=n*10+m
    if n==i:
        k=k+1
    if k>0:
        print("Palindrome!")
    else:
        print(i)