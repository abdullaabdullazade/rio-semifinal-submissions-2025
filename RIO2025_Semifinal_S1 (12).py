l, r = map(int, input().split())

for i in range(l, r + 1):
    if (i // 10 == 0 or i // 10 == i % 10 or i // 100 == i % 10 or i // 1000 == i % 10 or i // 10000 == i % 10) and i % 10 != 0:
        print("Palindrome!")
    else:
        print(i)