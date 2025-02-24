l, r = map(int,input().split())
for  i in range(l, r+1):
    k = i
    s = 0
    while k > 0:
        a = k % 10
        s = s * 10 + a
        k = k // 10
    if s == i:
        print("Palindrome!")
    else:
        print(i)
