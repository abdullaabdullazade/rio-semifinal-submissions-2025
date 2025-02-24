n,k = map(int,input().split())
ls = []
for i in range(n,k + 1):
    ls.append(i)
for j in range(k - n + 1):
    a = str(ls[j])
    b = ""
    for z in a:
        b = z + b
    if a == b:
        print("Palindrome!")

    else:
        print(a)