l,r = map(int, input().split())
for i in range(l,r+1):
    if str(i) == str(i)[::-1]:
        print("Polindrome !")
    else:
        print(i)



