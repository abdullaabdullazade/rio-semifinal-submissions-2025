a = input("")
start = int(a.split(' ')[0])
end = int(a.split(' ')[1])

while start <= end:
    c = str(start)
    polindrome = True
    i = 0
    l = int(len(c) / 2)
    while i <= l:
        if c[i] != c[l - i]:
            polindrome = False
        i += 1
    if polindrome:
        print("Palindrome!")
    else:
        print(c)
    start += 1