def is_palindrome(n):
    s = str(n)
    return s == s[::-1]
l, r = map(int, input().split())
for i in range(l, r + 1):
    if is_palindrome(i):
        print("Palindrome!")
    else:
        print(i)
