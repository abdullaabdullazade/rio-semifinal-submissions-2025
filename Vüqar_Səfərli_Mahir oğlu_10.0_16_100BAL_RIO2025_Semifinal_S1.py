s=input()
s=s.split()
sn=int(s[0])
bn=(int(s[1])+1)
c=""
for i in range(sn,bn):
    c1=""
    c=list(str(i))
    for b in range(len(c)):
        c1=c1+(c[(len(c)-1)-b])
    c1=list(c1)
    if (c==c1):
        print("Palindrome!")
    else:
        print(i)
