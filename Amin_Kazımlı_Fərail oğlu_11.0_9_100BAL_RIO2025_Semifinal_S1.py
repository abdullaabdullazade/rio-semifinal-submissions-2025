a=input().split()
l=int(a[0])
r=int(a[1])
for i in range(l,r+1):
    s=0
    a=i
    while i>0:
        r=i%10
        s=s*10+r
        i=i//10
    if s==a:
        print('Palindrome!')
    else:
        print(a)
