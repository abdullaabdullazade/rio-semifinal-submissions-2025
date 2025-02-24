j=input()
e=j.find(" ")
l=int(j[:e])
r=int(j[e+1:])
for i in range(l,r+1):
    if str(i)==(str(i))[::-1]:
        print("Palindrome!")
    else:
        print(i)
