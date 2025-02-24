a=list(input())
b1=int(a[0])
b2=int(a[2]+a[3])
for i in range(b1,(b2+1)):
    m=str(i)
    k=''
    for j in m:
        k=j+k
    if m==k:
        print("Palindrome!")
    else:
        print(m)


