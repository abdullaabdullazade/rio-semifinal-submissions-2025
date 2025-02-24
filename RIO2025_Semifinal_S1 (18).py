def is_palindrome(n):
    # Ədədin palindrom olub-olmadığını yoxlayırıq
    return str(n) == str(n)[::-1]

def main():
    # Giriş verilənlərini oxuyuruq
    l, r = map(int, input().split())
    
    # Interval arasında bütün ədədləri yoxlayırıq
    for i in range(l, r + 1):
        if is_palindrome(i):
            print("Palindrome!")
        else:
            print(i)

# Proqramı işə salırıq
main()
