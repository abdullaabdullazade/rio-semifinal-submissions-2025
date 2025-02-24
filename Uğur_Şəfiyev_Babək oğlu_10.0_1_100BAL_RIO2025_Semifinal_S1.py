def is_palindrome(n):
    # ədədin palindrom olub olmadığını yoxlayır
    s = str(n)
    return s == s[::-1]

def main():
    # Giriş verilənlərini oxuyuruq
    l, r = map(int, input().split())
    
    # l-dən r-ə qədər olan ədədləri yoxlayırıq
    for i in range(l, r + 1):
        if is_palindrome(i):
            print("Palindrome!")
        else:
            print(i)

if __name__ == "__main__":
    main()