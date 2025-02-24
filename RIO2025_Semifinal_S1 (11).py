l, r = map(int, input().split())
s = []
for i in range(l, r + 1):
    s.append(str(i))

x, y = 0, -1
for i in s:
    if i[x] == i[y]:
        print("Palindrome!")
    else:
        print(i)