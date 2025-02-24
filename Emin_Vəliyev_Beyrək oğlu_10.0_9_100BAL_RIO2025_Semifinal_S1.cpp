a, b = map(int, input().split())
s = []
for i in range(a, b + 1):
    s.append(str(i))

b = []
x, y = 0, -1
for i in s:
    if i[x] == i[y]:
        print("Palindrome!")
    else:
        print(i)