l, r = 8, 12
for n in range(l, r + 1):
    s = str(n)
    if s == s[::-1]:
        print("Palindrome!")
    else:
        print(n)
