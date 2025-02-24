# Funksiya palindromluğu yoxlayır
def is_palindrome(n):
    # Ədədi stringə çeviririk və əksinə müqayisə edirik
    return str(n) == str(n)[::-1]

# Giriş verilənləri alırıq
l, r = map(int, input().split())

# l-dən r-ə qədər olan ədədləri yoxlayiriq
for num in range(l, r + 1):
    if is_palindrome(num):
        print("Palindrome!")
    else:
        print(num)
