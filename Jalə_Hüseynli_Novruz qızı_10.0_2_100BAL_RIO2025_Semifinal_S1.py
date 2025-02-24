a=input()
a=a.split()
l=int(a[0])
r=int(a[1])
for i in range (l,r+1):
    a=str(i)
    i=list(a)
    if i==i[::-1]:
        print('Palindrome!')
    else:
        print(a)
