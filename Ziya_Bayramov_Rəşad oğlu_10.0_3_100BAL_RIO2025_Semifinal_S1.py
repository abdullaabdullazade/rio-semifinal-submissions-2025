def isitpal(num):
    dig = []
    digin = []
    l = len(str(num))
    for item in range(l):
        d = num % 10
        dig.append(d)
        digin.append(d)
        num //= 10
    digin.reverse()
    for c in range(len(dig)):
        if dig[c] != digin[c]:
            return False
        else:
            continue
    return True

n = input()
s = n.split(' ')
a = int(s[0])
b = int(s[1])
for item in range(a, b+1):
    if item < 10:
        print('Palindrome!')
        continue
    else:
        if isitpal(item):
            print('Palindrome!')
        else:
            print(item)
