test=input()
l=''
r=''
for i in test:
    if i!=' ':
        l=l+str(i)
    elif i==' ':
        k=test.index(i)
        break
for i in range(k,len(test)):
    if test[i]!=' ':
        r=r+str(test[i])
l=int(l)
r=int(r)

def f(x):
    a=[]
    while x>0:
        n=x%10
        x=x//10
        a.append(n)
        b=[]
    for h in a:
        b.insert(0,h)
    m=1
    for i in range(0,len(a)):
        if b[i]==a[i]:
            m=1
        else :
            m=0
    if m==1:
        return 1 #polindrom
    else:
        return 0 #deyil
for k in range (l,r+1):
    if f(k)==1:
        print("Palindrome!")
    else:
        print(k)
