def is_palindrome(n):
    s = str(n)
    return s == s[::-1]

l, r = map(int, input().split())

for num in range(l, r + 1):
    if is_palindrome(num):
        print("Palindrome!")
    else:
        print(num)