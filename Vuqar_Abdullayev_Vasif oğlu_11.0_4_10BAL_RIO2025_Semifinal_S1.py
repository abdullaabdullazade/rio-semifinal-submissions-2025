from os.path import split

a=list(input())
a1=a[0]
del(a[0])
del(a[0])
a2=''
for i in a:
    a2=a2+i
a1=int(a1)
a2=int(a2)
if 1<=a1<=a2<=10**18:
    for i in range(a1,(a2+1)):
        m=str(i)
        k=''
        for j in m:
            k=j+k
        if m==k:
            print("Palindrome!")
        else:
            print(m)


