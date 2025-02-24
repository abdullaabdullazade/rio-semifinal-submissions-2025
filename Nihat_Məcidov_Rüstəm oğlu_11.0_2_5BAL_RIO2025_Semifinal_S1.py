l,r=(input().split())
l=int(l)
r=int(r)

for i in range (l,r+1):
    if len(str(i))==1:
        print("Palindrome!")
    else:
        print(i)



