l, r=map(int, input().split())
n=1
m=0
k=0
for s in range(l, r+1):
    i=s
    k=0
    if i<10:
        k=k+1
    while i>10:
        n=i%10
        i=i//10
        m=m*10+n
    if m==n:
        k=k+1
    if k>0:
        print("Palindrome!")
    else:
        print(s)