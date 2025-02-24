l,r=input().split()
l=int(l)
r=int(r)
for i in range(l,r+1):
    a=i
    i=str(i)
    i=list(i)
    b=len(i)
    if b==1:
        print("Palindrome!")
    else:
        for k in range(0,b):
            c=k+1
        if i[k]==i[b-c]:
            print("Palindrome!")
        else:
            print(a)

