# 1-----------------
q=str(input())
x=q.split()
l=x[0]
r=x[1]
l=int(l)
r=int(r)
for i in range (l,r+1):
    ters=str(i)[::-1]
    if(ters==str(i)):
        print("Palindrome!")
    else:
        print(i)
