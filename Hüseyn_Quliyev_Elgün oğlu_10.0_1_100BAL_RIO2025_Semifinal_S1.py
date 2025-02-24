def is_palindrome(num):
    # ədədin tərsini yoxlamaq üçün stringə çeviririk
    return str(num) == str(num)[::-1]

# Giriş verilənlərini oxumaq
l, r = map(int, input().split())

# l-dən r-ə qədər olan bütün ədədləri yoxlayaq
for num in range(l, r + 1):
    if is_palindrome(num):
        print("Palindrome!")
    else:
        print(num)
