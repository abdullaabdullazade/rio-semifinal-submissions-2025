def is_palindrome(n):
    # ədədin palindrom olub-olmadığını yoxlamaq
    s = str(n)
    return s == s[::-1]

def main():
    # Giriş verilənlərini oxumaq
    l, r = map(int, input().split())
    
    for i in range(l, r + 1):
        if is_palindrome(i):
            print("Palindrome!")
        else:
            print(i)

# Proqramın işə salınması
main()
