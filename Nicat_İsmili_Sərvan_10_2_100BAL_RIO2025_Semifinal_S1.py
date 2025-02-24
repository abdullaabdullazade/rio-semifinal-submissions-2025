def is_palindrome(n):
    return str(n) == str(n)[::-1]

def print_numbers_with_palindromes(l, r):
    for number in range(l, r + 1):
        if is_palindrome(number):
            print("Palindrome!")
        else:
            print(number)

# Giriş verilənləri
l, r = map(int, input().split())

# Çıxış verilənləri
print_numbers_with_palindromes(l, r)
