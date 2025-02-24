l, r = map(int, input().split())
for i in range (l,r+1):
    i = list(str(i))
    if i[-1::-1] == i :
        print("Palindrome!")
    else:
        print(("").join(i))