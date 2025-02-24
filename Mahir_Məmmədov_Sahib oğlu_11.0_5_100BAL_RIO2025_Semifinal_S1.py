k=input().split()
l=int(k[0])
r=int(k[1])
for i in range(l,r+1):
    i=str(i)
    k=i[::-1]
    if k==i:
        print("Palindrome!")
    else:
        print(int(i))