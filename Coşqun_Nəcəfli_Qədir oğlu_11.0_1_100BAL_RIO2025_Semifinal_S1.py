def palindrome(num):
    s = str(num)
    return s == s[::-1]


l, r = map(int, input().split())

for i in range(l, r + 1):
    if palindrome(i):
        print("Palindrome!")
    else:
        print(i)
