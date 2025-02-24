a,b=map(int,input().split())
for i in range(a,b+1):
    if str(i)==str(i)[::-1]:
        print("Palindrome!")
    else:
        print(i)

