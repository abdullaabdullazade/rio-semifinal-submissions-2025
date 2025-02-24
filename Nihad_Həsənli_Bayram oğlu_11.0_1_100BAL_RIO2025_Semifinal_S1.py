l,r=input().split()
for i in range(int(l),int(r)+1):
    if str(i)==str(i)[::-1]:
        print("Palindrome!")
    else:
        print(i)
