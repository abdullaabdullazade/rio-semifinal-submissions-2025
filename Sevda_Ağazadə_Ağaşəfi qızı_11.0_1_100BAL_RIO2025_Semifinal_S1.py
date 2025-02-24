l,r=input().split()
for i in range(int(l),int(r)+1):
    if int(str(i)[::-1])==i:
        print("Palindrome!")
    else:
        print(i)
