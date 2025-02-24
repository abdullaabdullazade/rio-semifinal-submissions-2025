def is_palindrome(n):
    return str(n) == str(n)[::-1]

def find_palindromes(l,r):
    for num in range(l, r+1):
        if is_palindrome(num):
            print(num, "Palindrome!")
        else:
            print(num)


def main():
    try:
        l,r = map(int, input().split())
        if l>r:
            raise ValueError("düzgün daxil edin")
        find_palindromes(l,r)
    except find_palindromes as e:
            print(f"Error: {e}")

if __name__ == "__main__":
    main()