l,r=map(int,input().split())
for i in range(l,r+1):
    i1=i//10
    i2=i%10
    a=len(str(i))
    if a==1:
        print("Palindrome!")
    elif i1==i2:
        print("Palindrome!")
    else:
        print(i)