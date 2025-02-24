l, r = 8, 12
if l >= 1:
    if r >= l:
        if r <= 10 ** 18:
            if r - l + 1 <= 10 ** 5:
                for i in range(l, r + 1):
                    a = str(i)
                    if a == a[::-1]:
                        print("Palindrome!")
                    else:
                        print(i)
