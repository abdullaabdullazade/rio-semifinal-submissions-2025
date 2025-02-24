a,b=map(int,input().split())
for i in range(a,b+1):
    f=str(i)
    ff=f[::-1]
    if ff==f:
        print("Palindrome!")
    else:
        print(i)