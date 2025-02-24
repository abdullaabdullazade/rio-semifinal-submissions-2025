l,r = map(int, input().split())
a = []
a1 = ""
for i in range(l,r+1):
    a1 = ""
    b1 = i
    i = str(i)
    for h in range(len(i)):
        a.append(i[h])
    a.reverse()
    for j in range(len(a)):
        a1 = a1+str(a[j])
    a1 = int(a1)
    if b1 ==a1:
        print("Palindrome!")
    else:
        print(i)
    a = []
