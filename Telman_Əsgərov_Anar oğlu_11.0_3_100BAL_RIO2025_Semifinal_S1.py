l, r = map(int, input().split())
def palindrome(n):
    if n == n[::-1]:
        return 'Palindrome!'
    else:
        return n

for i in range(l,r+1):
    print(palindrome(str(i)))