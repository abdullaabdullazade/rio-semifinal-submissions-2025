l,r = list(map(int , input().split()))
for i in range(l,r+1):
    newi = str(i)
    if newi[:1] == newi[-1:]:
        print("Palindrome!")
    else:
        print(newi)
