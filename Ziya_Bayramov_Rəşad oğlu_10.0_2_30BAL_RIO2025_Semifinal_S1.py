def isitpal(num):
    dig = []
    l = len(str(num))
    for item in range(l):
        d = num % 10
        dig.append(d)
        num //= 10
    digin = dig
    digin.reverse()
    for c in dig:
        for d in digin:
            if c != d:
                return False
    return True

n = input()
s = n.split(' ')
a = int(s[0])
b = int(s[1])
ispal = True
for item in range(a, b+1):
    if item < 10:
        print('Palindrome!')
        continue
    else:
        if isitpal(item):
            print('Palindrome!')
        else:
            print(item)