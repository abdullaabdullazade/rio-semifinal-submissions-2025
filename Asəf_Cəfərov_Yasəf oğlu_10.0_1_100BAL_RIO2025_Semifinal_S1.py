def is_palindrome(num):
    # ədədin string formasını alıb, onu tərsinə çevrilib müqayisə edirik
    return str(num) == str(num)[::-1]

def solve(l, r):
    for num in range(l, r + 1):
        if is_palindrome(num):
            print("Palindrome!")
        else:
            print(num)

# Giriş oxunur
l, r = map(int, input().split())

# Həlli tətbiq edirik
solve(l, r)

