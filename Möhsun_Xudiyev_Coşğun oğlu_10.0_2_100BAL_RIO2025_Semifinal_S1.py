o=str(input())
y=list(o)
q=len(y)
h=o.find(" ")
b=[]
v=[]
l=0
r=0
for g in range(0,h):
    b.append(int(y[g]))
for s in range(h+1,q):
    v.append(int(y[s]))
z=len(b)
u=len(v)
for A in range(0,z):
    l=l+(b[A])*(10**(z-(A+1)))
for B in range(0,u):
    r=r+(v[B])*(10**(u-(B+1)))
def polindrome(a):
    j=[]
    c=str(a)
    d=list(c)
    f=len(d)
    for i in range(f-1,-1,-1):
        j.append(d[i])
    if a<10 or d==j:
        return 1
    else:
        return 0
for k in range(l,r+1):
    if polindrome(k)==1:
        print("Palindrome!")
    else:
        print(k)
