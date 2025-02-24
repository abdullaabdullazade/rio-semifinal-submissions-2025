l_r=input()
l=l_r.split()
n=int(l[0])
k=int(l[1])
for i in range(n,k+1):
    s=i
    t = ''
    while i!=0:
        t=t+str(i%10)
        i=i//10
    if int(t)==s:
        print('palindrome!')
    else:
        print(s)