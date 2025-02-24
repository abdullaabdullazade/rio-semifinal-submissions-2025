uInput = input()
l = int(uInput.split(' ')[0])
r = int(uInput.split(' ')[1])


def is_palindrome(s: str):
    if len(s) == 1:
        return True

    for ii in range(len(s) // 2):
        if s[ii] != s[len(s) - ii - 1]:
            return False
    return True


for i in range(l, r + 1):
    strI = str(i)
    if is_palindrome(strI):
        print("Palindrome!")
    else:
        print(strI)
