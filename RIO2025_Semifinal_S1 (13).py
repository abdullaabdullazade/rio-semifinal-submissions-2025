l, r = map(int, input().split())

for i in range(l, r + 1):
    if i // 10 == 0 or i // 10 == i % 10:
        print("Palindrome!")
    else:
        print(i)