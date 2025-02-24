def is_palindrome(n):
    return str(n) == str(n)[::-1]

# Giriş oxunur
l, r = map(int, input().split())

# Çıxış verilir
for num in range(l, r + 1):
    if is_palindrome(num):
        print("Palindrome!")
    else:
        print(num)
