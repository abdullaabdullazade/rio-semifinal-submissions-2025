l, r = map(int, input().split())
for i in range(l-1,r):
    i = i + 1
    if i < 10 or i % 11 == 0:
        print("Palindrome!")
    else:
        print(i)






