l=input().split()
for i in range(int(l[0]),int(l[1])+1):
    if str(i) == str(i)[::-1]:
        print("Palindrome!")
    else:
        print(i)
