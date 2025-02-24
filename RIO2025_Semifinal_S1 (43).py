x=input()
x=x.split()
l=int(x[0])
r=int(x[1])
for i in range(l,r+1):
    k=list(str(i))
    x=list(str(i))
    k.reverse()
    if k==x:
        print("Palindrome!")
    else:
        print(i)
