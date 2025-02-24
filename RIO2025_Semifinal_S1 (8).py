n=str(input())
d=n.find(" ")
l=int(n[:d])
r=int(n[d+1 :])
def p(x):
    x=str(x)
    m=x
    x=list(x)
    d=""
    for i in x:
        d=i+d
    if m==d:
        return 1
    else:
        return 0
for j in range (l, r+1):
    if p(j)==1:
        print("Palindrome!")
    else:
        print(j)
