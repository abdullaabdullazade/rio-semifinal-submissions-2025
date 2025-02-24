l, r = 8, 12
if 1 <= l <= r and r <= 10 ** 18:
    if (r - l + 1) <= 10 ** 5:
        for i in range(l, r + 1):
            c = str(i)
            if c == c[::-1]:
                print("Palindrome!")
            else:
                print(i)
