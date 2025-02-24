l,r = list(map(int , input().split()))
numbersset = []
reversevalues = []
for i in range(l,r+1):
    newi = str(i)
    if newi[:1] == newi[-1:]:
        print("Palindrome!")
    else:
        print(newi)
